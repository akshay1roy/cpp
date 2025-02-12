
#include<iostream>
using namespace std;

void selection_sort(int arr[],int size)
{
    int min=0,index;
    
        for(int i=0;i<size-1;i++)
        {
            int index=i;
            for(int j=i+1;j<size;j++)
            {
                if(arr[j]<arr[index])
                {
                    index=j;
                }
            }

            swap(arr[i],arr[index]);
        }
}

int main()
{
    int arr[]={10,8,9,4,3,2,5,7,6};
    selection_sort(arr,8);
    for(int i=0;i<8;i++)
    {
        cout<<arr[i]<<" ";
    }

}