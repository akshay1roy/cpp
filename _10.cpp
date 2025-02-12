#include<iostream>
using namespace std;

int main()
{
    int n,num;
    cout<<"Enter the number ";
    cin>>n;
    cout<<endl<<"Number is "<<n;
    cout<<endl<<"Enter the other number ";
    cin.ignore()>>num;
    n=n*10+num;
    cout<<endl<<"New number is "<<n;
}