// program to find the greatest number in the sorted array.

#include<iostream>
using namespace std;
void input(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}

void display(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int maximum(int arr[],int size)
{
    int i,max=-10000;
    for(i=0;i<size;i++){
        
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}

// void print_second_maximum(int arr[],int size)
// {
//     int i,n1=0,n2=0;
//     for(i=0;i<10;i++)
//     {
//         if(n1<arr[i]){
//             n1=arr[i];
            
//         }
//     }
//     cout<<endl<<" Second maximum number is"<<n2;
// }

void Second_number(int arr[],int num){
    int i,n,j;
    for(i=0;i<=num-1;i++){
        for(j=0;j<=num-i-1;j++){
            if(arr[j]>arr[j+1]){
                n=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=n;
            }
        }
    }
    cout<<endl;
    display(arr,10);

    cout<<endl<<"second Greatest number is "<<arr[1];
    cout<<endl<<"Second smallest number is "<<arr[8];
}

void reverse(int arr[],int size)
{
    int i,temp;
    for(i=0;i<=size/2;i++){
        temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }
    cout<<endl;
    display(arr,10);
}


int main()
{
    int arr[10];
    int i,max;
    cout<<"Enter the number :-";
    input(arr,10);
    display(arr,10);
    //max=maximum(arr,10);
    //cout<<endl<<"Maximum number is :- "<<max;
    //Second_number(arr,10);
    //print_second_maximum(arr,10);
    // print_second_maximum(arr,10);
    reverse(arr,10);
    return 0;

}