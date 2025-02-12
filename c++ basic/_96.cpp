// program to make the clock table

#include<iostream>
using namespace std;
void display(char s[],int size)
{
    int carry=0,second=0;
    // for(int i=0;i<s.length();i++)
    // {
       if(s[size-2]=='P'|| s[size-2]=='p')
       {
        // cout<<endl<<s[s.length()-2];
        cout<<endl<<s[size-2]<<endl;
        
          second=s[1];
          second=second+2;
          if(second>10)
          {
            carry=second/10;
            second=second%10;
          }
          s[1]=second;
          s[0]=s[0]+carry+1;

          cout<<"S[0] "<<s[0]<<" s[1]"<<s[1];
       }
    // }

    // s.resize(8);

    // cout<<endl<<"Resizeing :- "<<s;

    // for(int i=0;i<size;i++)
    // {
    //     cout<<s[i];
    // }
}




int main()
{
    char  s[10];
    cout<<"Enter the Time with AM or PM :- ";
    for(int i=0;i<10;i++)
    {
        cin>>s[i];
    }
    // getline(s,10);

    // getline(cin,s);
    // cout<<endl<<"Time is :-"<<s;
    for(int i=0;i<10;i++)
    {
        cout<<" "<<s[i];
    }
    display(s,10);
    for(int i=0;i<10;i++)
    {
        cout<<" "<<s[i];
    }
}