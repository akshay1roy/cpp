#include<iostream>
using namespace std;

int Getlength(char *str)
{
    int i,len=0;
    for(i=0;i<str[i]!='\0';i++)
    {
        len++;
    }
    return len;
}

int main()
{
    char str[30];
    int length;
    cout<<"Enter the string";
    cin.getline(str,30);
    length=Getlength(str);
    cout<<"Length of string is "<<length;
    return 0;
}