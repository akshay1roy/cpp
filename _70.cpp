// check wheather the number is fibonacci series or not 

#include<iostream>
using namespace std;
int check_fibonacci(int num)
{
    int a=0,b=1,c,i;
    for(i=1;i>1;i++)
    {
        c=a+b;
        a=b;
        b=c;
        
        if(num==0 || num==1){
            return 1;
        }
        if(num==a || num==b)
        {
            return 1;
        }
        
        if(num>a && num <b)
        {
            return 0;
        }
    }
}
int main()
{
    int num;
    cout<<"Enter the number :-";
    cin>>num;
    if(check_fibonacci(num)==1)
    {
        cout<<" Term of Fibonnaci series ";
    }
    else{
        cout<<" Not the Term of Fibonacci series ";
    }

}