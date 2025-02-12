
#include<iostream>
using namespace std;

void display(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int dublicate(int arr[],int num)
{
    int count=0;
    int i,j;
    for(i=0;i<num-1;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int n;
    cout<<"Enter the size of the array :-";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl<<"The elements are :-";
    display(arr,n);
    int count=dublicate(arr,n);
    cout<<endl<<"Total number of dublicate elements in the array is :-"<<count;
}