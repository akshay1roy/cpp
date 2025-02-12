#include<iostream>
using namespace std;

int prime(int num)
{
    int i,flag=0;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            flag=1;
        }
    }
    return flag;
}
int main()
{
    int num;
    cout<<"Enter the number:-";
    cin>>num;
    if(prime(num)!=1){
        printf("\n Number is Prime");
    }
    else
    {
        printf("\n Number is not prime");
    }
    
}