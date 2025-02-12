

// program to merge two arrays of the same size sorted in descending order.

#include<iostream>
using namespace std;

void input(int arr[],int size)
{
    cout<<endl<<"Enter the "<<size<<" numbers:- ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}

void display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void sorting(int arr[],int size)
{
    int temp;
    for(int i=0;i<size;i++)
    {
       
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void merge_array(int arr1[],int n1,int arr2[],int n2,int arr3[])
{
    int i=0,j=0;
    int k=0;
    // x=n1;
    // y=n2;
    int total=n1+n2;
    while(i<=n1 && j<=n2)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }

    if(i<n1)
    {
        while(i!=n1-1)
        {

            arr3[k]=arr1[i];
            k++;
            i++;
        }
    }
    if(j<n2)
    {
        while(j!=n2-1)
        {
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
}

int main()
{
    int n1,n2;
    cout<<"Enter the size of first array :-";
    cin>>n1;
    cout<<"Enter the size of second array :-";
    cin>>n2;
    int arr1[n1],arr2[n2];
    int arr3[n1+n2];
    input(arr1,n1);
    input(arr2,n2);

    display(arr1,n1);
    cout<<endl;
    display(arr2,n2);
    sorting(arr1,n1);
    sorting(arr2,n2);
    cout<<endl;
    display(arr1,n1);
    cout<<endl;
    display(arr2,n2);

    merge_array(arr1,n1,arr2,n2 ,arr3);
    cout<<endl<<"After merginng two array the new array is :-";
    display(arr3,n1+n2);


}