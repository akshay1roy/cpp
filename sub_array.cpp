
#include<iostream>
using namespace std;

int main()
{
    int total=0,sum=0;
    int arr[]={2,3,4,5,-4};

    int size=sizeof(arr)/sizeof(arr[0]); 

    for(int i=0;i<size;i++)
    {
        for(int j=i;j<size;j++)
        {
            sum=0;
           for(int k=i;k<j;k++)
           {
                sum=sum+arr[k];
           }
          
           if(sum>total)
           {
                total=sum;
           }
        }
    }

    printf("\n Largest Sub array is %d",total);
}