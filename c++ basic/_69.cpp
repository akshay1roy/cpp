#include<iostream>
using namespace std;

int maximum(int a,int b,int c=0)
{
    // int maxi;
    if(a>b && a>c)
    {
        return a;
    }
    else{
        if(b>a && b>c)
        {
            return b;
        }
        else{
            return c;
        }
    }
}
int main()
{
    int a,b,c,max;
    cout<<"Enter a and b and c :- ";
    cin>>a>>b>>c;
    max=maximum(a,b);
    cout<<"\n Maximum of the two number is :-"<<max;
    max=maximum(a,b,c);
    cout<<"\n Maximum of the two number is :-"<<max;

    

}