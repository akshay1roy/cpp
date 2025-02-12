
// roatate the array 

#include<iostream>
using namespace std;

int main()
{
    int n;
    int i,rotate;
    cout<<"Enter the size of the array :-";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl<<"The elements are in the array is :-";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl<<"How many times you rotate:-";
    cin>>rotate;
    while(rotate!=0)
    {
        
        int temp=arr[n-1];
        for(i=n-1;i>0;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[0]=temp;
        rotate--;
    }
    cout<<endl<<"The elements are in the array is :-";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    

}