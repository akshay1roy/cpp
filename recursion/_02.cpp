#include<iostream>
using namespace std;

int print_reverse(int i,int last)
{
    if(i==last)
    {
        cout<<i<<" ";
        return 0;
    }

    cout<<i<<" ";
    print_reverse(i-1,last);
    
}


int main()
{
    int data;
    cout<<"Enter the number is ";
    cin>>data;
    print_reverse(data,1);
    return 0;
}