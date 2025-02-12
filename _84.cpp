
// find the unique elements in the array
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

void print_all_unique(int arr[],int num)
{
   int arr1[num]=0;
   for(int i=0;i<num;i++)
   {
    
   }
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
    cout<<endl<<"The all unique elements in the array is :-";
    print_all_unique(arr,n);
}