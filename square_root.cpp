
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number to find the square root :- ";
    cin>>num;

    int start=1,end=num;
    int mid,index;
    while(start<=end)
    {
        mid=(start+end)/2;

        if(mid*mid==num)
        {
            return mid;
        }
        if(mid*mid>num)
        {
            end=mid-1;
        }
        if(mid*mid<num)
        {
            index=mid;
            start=mid+1;
        }
    }

    cout<<"The square root of the number is almost "<<index;

}