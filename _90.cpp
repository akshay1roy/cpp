

// count the nunber of frequency of elements in tha array .

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

void frequency_array(int arr[],int num)
{
    int max=-6746;
    for(int i=0;i<num;i++)
    {
        if(max<arr[i]){
            max=arr[i];
        }
    }

    int arr1[max]={0};
    int count=0;
    for(int i=0;i<num;i++)
    {
        count=1;
        for(int j=i;j<num;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(arr1[arr[i]+1]!=0){
            arr1[arr[i]+1]=count;
        }
    }

    cout<<"frequency of all numbe are :-";
    
    for(int i=0;i<=max;i++)
    {
        if(arr1[i]!=0)
        {
            cout<<endl<<i<<" frequency is "<<arr[i];
        }
    }
    
}


int main()
{
    int num;
    cout<<"Enter size of the array :-";
    cin>>num;
    int arr[num];
    input(arr,num);
    display(arr,num);
    frequency_array(arr,num);

}