import { useEffect, useState } from "react";
import "./ChatList.css";
import AddUser from "./addUser/AddUser";
import { useUseStore } from "../../../lib/userStore";
import { doc, getDoc, onSnapshot } from "firebase/firestore";
import { db } from "../../../lib/firebase";

function ChatList() {
  const [chats, setChats] = useState([]);
  const [addMode, setAddMode] = useState(false);

  const { currentUser } = useUseStore();

  useEffect(() => {
    const unsub = onSnapshot(
      doc(db, "userChats", currentUser.id),
      async (res) => {
        const items = res.data();

        const promisses = items.map(async (item) => {
          const userDocRef = doc(db, "users", item.receiverdId);
          const userDocSnap = await getDoc(userDocRef);

          const user = userDocSnap.data();

          return { ...item, user };
        });

        const chatData = await Promise.all(promisses);

        setChats(chatData.sort((a, b) => b.updatedAt - a.updatedAt));
      }
    );

    return () => {
      unsub();
    };
  }, [currentUser.id]);

  console.log("chats",chats);

  return (
    <div className="chatList">
      <div className="search">
        <div className="searchBar">
          <img src="./search.png" alt="" />
          <input type="text" placeholder="Search" />
        </div>
        <img
          src={addMode ? "./minus.png" : "./plus.png"}
          alt=""
          className="add"
          onClick={() => setAddMode((prev) => !prev)}
        />
      </div>

      {chats.map((chat) => (
        <div className="item" key={chat.chatId}>
          <img src="./avatar.png" alt="" />
          <div className="texts">
            <span>Jane doe</span>
            <p>{chat.lastMessage}</p>
          </div>
        </div>
      ))}

      {addMode && <AddUser />}
    </div>
  );
}

export default ChatList;
