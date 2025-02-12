
#include<iostream>
using namespace std;

int pivot_element(int arr[],int start,int end)
{
    int pos=start;
    for(int i=start;i<=end;i++)
    {
        if(arr[i]<=arr[end])
        {
            swap(arr[pos],arr[i]);
            pos++;
        }
    }

    return pos-1;
}

void quick_sort(int arr[],int start,int end)
{
    int pivot=pivot_element(arr,start,end);


    if(start>=end)
    {
        return ;
    }
    

    // left side 
    quick_sort(arr,start,pivot-1);
    // right side
    quick_sort(arr,pivot+1,end );


}

int main()
{
    int arr[]={3,5,7,1,2,4,10,9,8,6};

    quick_sort(arr,0,9);
    for(int i=0;i<=9;i++)
    {
        cout<<" "<<arr[i];
    }
}
