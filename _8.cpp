#include<iostream>
using namespace std;

int Lsb_value(int len)
{
    int i=0,l=1;
    for(i=1;i<len;i++)
    {
        l=l*2;
    }
    return l;
}
int main()
{
    int num,len=0,n;
    cout<<"Enter the binay number";
    cin>>num;
    while(num!=0)
    {
        n=num%10;
        len++;
        num=num/10;
    }
    cout<<endl<<"Position of LSB is "<<len;
    int value=Lsb_value(len);
    cout<<endl<<"Value of LSB is "<<value;

    // return ;
}