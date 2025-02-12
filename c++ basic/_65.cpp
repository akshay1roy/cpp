#include<iostream>
using namespace std;

int Greatest_digit(int num)
{
    int max=0,rem;
    while(num!=0)
    {
        rem=num%10;
        // max=rem;
        if(max<rem)
        {
            max=rem;
        }
        num=num/10;
    }
    return max;
}
int main()
{
    int num,Number;
    cout<<"Enter the number :-";
    cin>>num;
    Number=Greatest_digit(num);
    cout<<"\n Greatest Digit is :- "<<Number;
}