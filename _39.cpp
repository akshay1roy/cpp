// program to calculate the number of combinations one can make from n items and r selected at a time.

#include<iostream>
using namespace std;
int fact(int num)
{
    int i,f=1;
    for(i=1;i<=num;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int n,r,res;
    cout<<"Enter the n number :- ";
    cin>>n;
    cout<<endl<<"Enter the r number to select from n :-";
    cin>>r;

    res=fact(n)/(fact(r)*fact(n-r));

    cout<<endl<<"Total number of combinations are "<<res;

    return 0;

}