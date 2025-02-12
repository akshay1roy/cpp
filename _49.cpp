// program to reverse the string.

#include<iostream>
#include<string.h>
using namespace std;

void reverse(char *str)
{
    int i,l;
    char ch;
    l=strlen(str);
    for(i=0;i<l/2;i++){
        ch=str[i];
        str[i]=str[l-1-i];
        str[l-i-1]=ch;
    }
}
int main()
{
    char str[30];
    int i;
    cout<<"Enter the string";
    cin.getline(str,30);
    cout<<endl<<"String is:-"<<str;
    reverse(str);
    cout<<endl<<"Reverse string is :-"<<str;
    return 0;
}