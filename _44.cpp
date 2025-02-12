// program to copy the elements of one array into another array.

#include<iostream>
using namespace std;
void display(int arr[],int size){
    int i;
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void copy_data(int arr1[],int arr2[],int size){
    int i;
    for(i=0;i<size;i++){
        arr2[i]=arr1[i];
    }
}

int main()
{
    int arr1[5],arr2[5];
    int i,j;
    cout<<"Enter the number :-";
    for(i=0;i<5;i++){
        cin>>arr1[i];
    }

    display(arr1,5);
    copy_data(arr1,arr2,5);
    cout<<endl<<"Printing the arr2 data :- "<<endl;
    display(arr2,5);
    return 0;
}