// program to check which is greatest among three number 

#include<iostream>
using namespace std;
int main()
{
    int a,b,c,num;
    cout<<"Enter the number :- ";
    cin>>a>>b>>c;
    cout<<endl<<"a= "<<a<<" b="<<b<<" c="<<c;
    num=(a>b&&a>c)?a:(b>a&&b>c)?b:c;
    cout<<endl<<" Greatest number is "<<num;
    return 0;
}