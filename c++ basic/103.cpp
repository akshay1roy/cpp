
#include<iostream>
using namespace std;

int search_element(int arr[],int n, int key)
{
    int start=0;
    int end=n-1;
    int mid=(end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }   
        else{
            if(key>arr[mid])
            {
                 start=mid+1;
             }
             else{
                if(key<arr[mid])
              {
                     end=mid-1;
              }
             }
        }
        
        mid=(start+end)/2;
    }
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int search;
    cout<<"Enter the number :- "<<endl;
    cin>>search;
    int key=search_element(arr,10,search);
    cout<<endl<<"The index is "<<key<<" and number is "<<arr[key];
}