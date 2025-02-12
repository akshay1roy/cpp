
#include<iostream>
using namespace std;

int search_element(int arr[],int size, int key)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        else{
            if(arr[mid]>key)
            {
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        mid=start+(end-start)/2;
    }
}

int main()
{
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    int search;
    cout<<"Enter the number :- "<<endl;
    cin>>search;
    int key=search_element(arr,10,search);
    cout<<endl<<"The index is "<<key<<" and number is "<<arr[key];
}