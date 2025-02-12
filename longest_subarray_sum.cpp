
#include<iostream>
using namespace std;

int main()
{
    int arr[]={2,3,4,5,-1,-2};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sum=0;

    for(int i=0;i<size;i++)
    {
        if(arr[i]>0)
        {
            sum=sum+arr[i];
        }
    }
    printf("\n Sum of the largest subarray is %d",sum);
}