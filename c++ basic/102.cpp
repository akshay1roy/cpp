
#include<iostream>
using namespace std;

string ip_address(string &s)
{
    int index=0;
    string ans;
    while(index<s.size())
    {
        if(s[index]=='.')
        {
            ans=ans+"[.]";
        }
        else{
            ans=ans+s[index];
        }
        index++;
    }
    return ans;
}
int main()
{
    string str;
    cout<<"Enter the string :-";
    // cout<<str;
    getline(cin,str);
    ip_address(str);
    cout<<endl<<"New address is "<<str;
}