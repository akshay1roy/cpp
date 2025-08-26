
#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

int count_subarray(vector<int> &vec,int size)
{
    vector<int>v(size,0);
    int maxi=0;

    v[0]=vec[0];

    for(int i=1;i<size;i++)
    {
        v[i]=v[i-1]+vec[i];
    }

    unordered_map<int,int>m;

    for(int i=0;i<size;i++)
    {
        if(m.find(v[i])!=m.end())
        {
            int data=i-m[v[i]];
            if(data>maxi)
            {
                maxi=data;
            }
        }
        else{
            m[v[i]]=i;
        }
    }
    return maxi;
}

int main()
{
    int n;
    cout<<"Enter the size of the array ";
    cin>>n;

    vector<int>vec(n);

    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }

    int longest=count_subarray(vec,n);

    cout<<"maxi subarray is "<<longest;
}

