// printing String

#include<iostream>
using namespace std;
int  count_string(char str[])
{
    int i,l=0;
    for(i=0;str[i]!='\0';i++){
        l++;
    }
    return l;
}
int main()
{
    char str[30];
    int length;
    cout<<"Enter the string";
    cin.getline(str,30);
    length=count_string(str);
    cout<<endl<<"Length of string is "<<length;
    return 0;

}