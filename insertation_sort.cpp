
#include<iostream>
using namespace std;

void insertion_sort(int arr[],int size)
{
    for(int i=1;i<size;i++)
    {
        int j=i;
        while(j>0 && arr[j-1]>arr[j])
        {
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}


int main()
{
    int arr[]={3,5,1,6,2,12,9};
    insertion_sort(arr,7);
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
}