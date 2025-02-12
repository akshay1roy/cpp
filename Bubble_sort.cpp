
#include<iostream>
using namespace std;

void bubble_sort(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        
        for(int j=0;j<size-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

}


int main()
{
    int arr[]={7,4,8,5,1,22,33,41,9,3};
    bubble_sort(arr,10);
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
}