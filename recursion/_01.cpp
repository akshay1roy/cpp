
#include<iostream>
using namespace std;

int print(int i,int last)
{
    if(i==last)
    {
        cout<<i<<" ";
        return 0;
    }
    
    cout<<i<<" ";
    print(i+1,last);

}

int main()
{
    int data;
    cout<<"Enter the number is ";
    cin>>data;
    print(1,data);
    return 0;
    
}