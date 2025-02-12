// check the given number is present in the number or not

#include<iostream>
using namespace std;
void check_number(int a,int b)
{
    int n,flag=0;
    while(a!=0)
    {
        n=a%10;
        if(n==b){
          flag=1;
        }
        a=a/10;
    }
    if(flag==1){
        cout<<"Digit is present";
    }
    else{
        cout<<"Digit is not present";
    }
}
int main()
{
    int a,b;
    cout<<"Enter the number :-";
    cin>>a;
    cout<<"Ente the number to find :-";
    cin>>b;
    check_number(a,b);
    return 0;
}