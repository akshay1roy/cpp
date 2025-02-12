// program to calculate the Lcm of two numbers.

#include<iostream>
using namespace std;

int Find_lcm(int a,int b)
{
    int i,num;
    num=a>b?a:b;
    for(i=num;i<=a*b;i++)
    {
        if(i%a==0 && i%b==0){
           return i;

        }
    }
    return 0;
}

int main()
{
    int a,b,num;
    cout<<"Enter the first number :-";
    cin>>a;
    cout<<endl<<"Enter the second numeber:-";
    cin>>b;
    num=Find_lcm(a,b);
    cout<<endl<<"Lcm of two number is :-"<<num;
    return 0;
}