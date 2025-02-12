// swaping strings of two char arrays of calling functions

#include<iostream>
#include<string.h>
using namespace std;
void display(char str[])
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        cout<<str[i];
    }
}

void swap_string(char *str1,char *str2)
{
    int i,l1,l2,min,count=0;
    char ch;
    l1=strlen(str1);
    l2=strlen(str2);
    min=(l1>l2)?l2:l1;
    for(i=0;i<min;i++){
        ch=str1[i];
        str1[i]=str2[i];
        str2[i]=ch;
        count++;
    }
    if(l2>count)
    {
        while(l2>count){
        
        str1[count]=str2[count];
        str2[count]='\0';
        count++;
        }
        
    }
    if(l1>count)
    {
        while(l1>count){
        //  count++;
        str2[count]=str1[count];
        str1[count]='\0';
        count++;
        }
    }

}

int main()
{
    char str1[100];
    char str2[100];
    cout<<"Enter the first string:-";
    cin.getline(str1,100);
    cout<<endl<<"Enter the second string:-";
    cin.getline(str2,100);
    cout<<endl<<"First string is :-";
    display(str1);
    cout<<endl<<"Second string is :-";
    display(str2);
    swap_string(str1,str2);
    cout<<endl<<"After swaping "<<endl<<"First string is :-";
    display(str1);
    cout<<endl<<"Second swaping is :-";
    display(str2);
}