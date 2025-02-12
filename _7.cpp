// program to take a character as an input and display its ASCII code.

#include<iostream>
using namespace std;
int main(){
    char ch;;
    cout<<"Enter the value :- ";
    cin>>ch;
    for(int i=0;i<=256;i++)
    {
        if(i==ch)
        {
            cout<<"ASCII code is "<<i;
            
        }
    }
}