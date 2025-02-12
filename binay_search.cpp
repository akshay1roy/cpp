

#include<iostream>
using namespace std;

int binay_search(int arr[],int size,int search)
{
    int start=0, last=size-1;
    int mid=(start+last)/2;

    while(start<=last)
    {
        mid=(start+last)/2;

        if(arr[mid]==search)
        {
            return mid;
        }
        if(arr[mid]>search)
        {
            last=mid-1;
        }
        if(arr[mid]<search)
        {
            start=mid+1;
        }
    }
    return -1;
}
int main()
{
    int arr[]={2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int search;
    cout<<"Enter the number to search :- ";
    cin>>search;

    if(binay_search(arr,size,search))
    {
        cout<<endl<<"The index is of the element is "<<binay_search(arr,size,search);
    }
    else{
        cout<<endl<<"Element not found !!";
    }

}