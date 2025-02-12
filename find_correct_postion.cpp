

#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,4,6,8,10,14,16,18};
    int key;
    cout<<"Enter the number of number :- ";
    cin>>key;

    int size=sizeof(arr)/sizeof(arr[0]);
    int index=0;

    int start=0,last=size-1;
    int mid;

    while(start<=last)
    {
        mid=start+(last-start)/2;

        if(arr[mid]==key)
        {
            index=mid;
            break;
        }
        if(arr[mid]>key)
        {
            index=mid;
            last=mid-1;
        }
        if(arr[mid]<key)
        {
            start=mid+1;
        }
       
    }

    cout<<endl<<"Index is "<<index;
}