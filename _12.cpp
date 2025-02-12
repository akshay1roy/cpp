// program to check the number is even or odd 

#include<iostream>
using namespace std;
int check_even_odd(int num)
{
    int n1,n2;
    n1=num;
    n2=n1/2;
    if(2*n2==num){
        cout<<endl<<"Number is even ";
    }else
    {
        cout<<endl<<"Number is odd ";
    }
    
}
int main()
{
    int num;
    cout<<"Enter the number :- ";
    cin>>num;
    check_even_odd(num);
    return 0;
}