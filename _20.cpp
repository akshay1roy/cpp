// program to reverser the number 

#include<iostream>
using namespace std;
int reverse(int num)
{
    int rem,sum=0;
    while(num!=0){
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;
    }
    return sum;
}
int main()
{
    int num,i;
    cout<<"Enter the number ";
    cin>>num;

    num=reverse(num);
    cout<<endl<<"Reverse of the number is "<<num;
}