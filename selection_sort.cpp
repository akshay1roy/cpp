
#include<iostream>
using namespace std;

void selectionSorts(int arr[],int size)
{
    for(int i=size-1;i>0;i--)
    {
        int index=i;
        for(int j=i-1;j>=0;j--)
        {
            if(arr[index]<arr[j])
            {
                index=j;
            }
        }
        swap(arr[i],arr[index]);
    }
}


int main()
{
    int arr[]={5,6,3,2,1,4,7,11,32,54,67,43,24,32,19,18,35,65,76,35};
    selectionSorts(arr,20);
    for(int i=0;i<20;i++)
    {
        cout<<arr[i]<<" ";
    }
}