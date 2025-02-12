
// reverse the elements of the array.

#include<iostream>
using namespace std;

void display(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void input(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}

void reverse_array(int arr[],int size)
{
    int i,num;
    for(i=0;i<(size)/2;i++)
    {
        num=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=num;
    }
}


int main()
{
    int arr[10];
    cout<<"Enter the elements in the array:-";
    input(arr,10);

    cout<<endl<<"The elements are :-";
    display(arr,10);
    cout<<endl<<"After reverse the elements";
    reverse_array(arr,10);
    display(arr,10);
    return 0;
}