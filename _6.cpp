#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter two numbers ";
    cin>>a>>b;
    cout<<"a="<<a<<" b="<<b;
    cout<<endl<<"After swapping ";
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<endl<<" a="<<a<<" b="<<b;
    return 0;
}