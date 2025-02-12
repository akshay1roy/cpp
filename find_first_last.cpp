
#include<iostream>
using namespace std;

int main()
{
    int arr[]={5,7,7,8,8,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the number ";
    int key;
    cin>>key;

    int first=-1,end=-1;
    int start=0,last=size-1;
    int mid;


    // first occuernce 
    while(start<=last)
    {
        mid=start+(last-start)/2;

        if(arr[mid]==key)
        {
            first=mid;
            last=mid-1;
        }
        if(arr[mid]>key)
        {
            last=mid-1;
        }
        if(arr[mid]<key)
        {
            start=mid+1;
        }
    }


     end=-1;
     start=0,last=size-1;
    // second occuernce 
    while(start<=last)
    {
        mid=start+(last-start)/2;

        if(arr[mid]==key)
        {
            end=mid;
            start=mid+1;
        }
        if(arr[mid]>key)
        {
            last=mid-1;
        }
        if(arr[mid]<key)
        {
            start=mid+1;
        }
    }
    

    cout<<endl<<"First occurence is "<<first<<" second occurence is "<<end;
}