

#include<iostream>
using namespace std;


void rotate(int arr[],int size)
{
    int temp=arr[size-1];
    for(int i=size-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;

    
}


int main()
{
    int arr[]={3,4,5,6,7,8};
    rotate(arr,6);
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
}