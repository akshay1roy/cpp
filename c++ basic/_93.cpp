
#include<iostream>
using namespace std;

void input(int arr[3][3],int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
}

int difference_diagonal(int arr[3][3],int row ,int col)
{
    int result=0;
    
    // sum of left to right diagonal 
    int sum1=0;
    int sum2=0;
    
    
    for(int i=0;i<row ;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==j)
            {
                sum1=sum1+arr[i][j];
            }
        }
    }
    
    
    // sum of right to left diagonal 
    
    
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i+j==2)
            {
                sum2=sum2+arr[i][j];
            }
        }
    }
    
    result=sum1-sum2;
    
    if(result<0)
    {
        result=result*-1;
    }
    
    return result;
   
}


int main()
{
    int arr[3][3];
    int differ;
    input(arr,3,3);
    differ=difference_diagonal(arr,3,3);
    cout<<differ;
}