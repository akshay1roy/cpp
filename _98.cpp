

#include<iostream>
using namespace std;


int divisibleSumPairs(int n, int k, vector<int> ar) {
    
    int num1,num2;
    int count=0;
    int data,sum;
    cin>>n;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        cin>>data;
        ar.push_back(data);
    }
    
    
    for(int i=0;i<n-1;i++)
    {
        num1=ar[i];
        for(int j=i+1;j<n;i++)
        {
            sum=num1+ar[j];
            
            if(sum%k==0)
            {
                count++;
            }
            
        }
    }
    return count;
}

int main()
{
    int result;
    // vector<int> s;
    int n,k;
    vector<int> ar(n);
     result = divisibleSumPairs(n, k, ar);
    // result = birthday(s, d, m);
    cout<<endl<<"Result :-";
}