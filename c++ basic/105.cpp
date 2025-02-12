#include<iostream>
using namespace std;


int main()
{
    int arr[]={5,6,7,7,8,8,8,9,10};
    int search;
    cout<<"Enter the number :- "<<endl;
    cin>>search;
    int key=search_element(arr,9,search);
    cout<<endl<<"The index is "<<key<<" and number is "<<arr[key];
}