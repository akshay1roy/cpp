
#include<iostream>
using namespace std;
int power(int x,int y)
{
    int i,num=1;
    if(y==0)
    {
        return 1;
    }
    else{
        for(i=1;i<=y;i++)
        {
            num=num*x;
        }
    }
    return num;
}
int main()
{
    int x,y,num;
    cout<<"Enter the base value:-";
    cin>>x;
    cout<<endl<<"Enter the power value:-";
    cin>>y;
    num=power(x,y);
    cout<<endl<<" "<<x<<" to the power "<<y<<" is "<<num;
}