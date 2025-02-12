#include<algorithm>

#include<iostream>
using namespace std;

int find_second_max(int arr[],int size)
{
    int maxi_index;
    int maxi=0;
    for(int i=0;i<size;i++)
    {
        if(maxi<arr[i])
        {
            maxi=arr[i];
            maxi_index=i;
        }
    }
    
    int second=0;
    for(int i=0;i<size;i++)
    {
        if(maxi!=arr[i])
        {
            second=max(arr[i],second);
        }
    }
    return second;
}

int main()
{
    int arr[]={2,6,4,3,8,5,1};
    int max=find_second_max(arr,7);
    cout<<"Second Maximum number is "<<max;

}