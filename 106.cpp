

#include<iostream>
using  namespace std;

int found_missing(int arr[],int n,int key)
{
    
    int start=1;
    int end=arr[n-1];
    int count=0;
    for(int i=0;i<end;i++)
    {

        while(arr[i]>start)
        {
            count++;
           
            if(count==key)
            {
                return start;
            }
            start++;
        }

         start++;
    }
}

int main()
{
    int n;
    cout<<"Enter the number :- ";
    cin>>n;
    int arr[n];
    cout<<endl<<"Enter "<<n<<" elements in the array ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<endl<<"Enter the nth missing number :- ";
    cin>>key;
    cout<<"the "<<key<<"th  element is"<<found_missing(arr,n,key);

}