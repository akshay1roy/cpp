#include<iostream>
using namespace std;
int add(int a,int b,int c=0)
{
    int sum;
    sum=a+b+c;
    return sum;
}

int main()
{
    int a,b,c,sum;
    cout<<"Enter a and b and c";
    cin>>a>>b>>c;
    sum=add(a,b);
    cout<<"\n The sum is "<<sum;
    sum=add(a,b,c);
    cout<<"\n The sum is "<<sum;

}