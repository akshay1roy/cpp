#include<iostream>
using namespace std;
void fibonacci(int num)
{
    int a=0,b=1,c,i;
   for(i=1;i<=num;i++)
   {
    if(i>2)
    {
        c=a+b;
        a=b;
        b=c;
        cout<<" "<<c;
    }
    if(i==1)
    {
        cout<<" "<<a;
    }
    if(i==2){
        cout<<" "<<b;
    }
   }
}
int main()
{
    int num;
    cout<<"Enter the number :-";
    cin>>num;
    fibonacci(num);

}