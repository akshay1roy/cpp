

#include<iostream>
using namespace std;

int main()
{
    int min=0,max=0;
   
    int arr[5];
    int temp[5];
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    
    int sum=0;
    for (int i=0;i<5;i++)
    {
        sum=0;
        for(int j=0;j<5;j++)
        {
            
            if(i==j)
            {
                continue;
            }
            sum=sum+arr[j];
        }
        cout<<endl<<sum;
        temp[i]=sum;
        
    }
     min=785798;
     max=-736378;
    
    for(int i=0;i<5;i++)
    {
        if(max<temp[i])
        {
            max=temp[i];
        }
        if(min>temp[i])
        {
            min=temp[i];
        }
    }
    
    cout<<min<<" "<<max;
}