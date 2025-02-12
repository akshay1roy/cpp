// program to find the second largest number

#include<iostream>
using namespace std;

int find_second_largest(int arr[],int size)
{
    int n1,n2,i;
    n1=n2=0;
    for(i=0;i<size;i++)
    {
        if(n1<arr[i]){
            n2=n1;
            n1=arr[i];
            // n2=n1;
        }
        else{
            if(n2<arr[i]){
                n2=arr[i];
            }
        }
    }
    return n2;
}

int main()
{
    int arr[10],i,j,second;
    cout<<"Enter the number in array :-";
    for(i=0;i<10;i++){
        cin>>arr[i];
    }

    cout<<endl<<"Printing data :-";
    for(i=0;i<10;i++){
        cout<<" "<<arr[i];
    }

    second=find_second_largest(arr,10);
    cout<<endl<<"Second largest number :-"<<second;
    return 0;
}