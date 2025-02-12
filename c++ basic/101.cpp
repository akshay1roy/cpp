#include<iostream>
#include<vector>
using namespace std;

int count_palindrome(string str)
{
    vector <int> lower(26,0),upper(26,0);

    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            lower[str[i]-'a']++;
        }

        if(str[i]>='A' && str[i]<='Z')
        {
            upper[str[i]-'A']++;
        }
    }

    int count=0;
    bool odd=0;
    for(int i=0;i<26;i++)
    {
        if(lower[i]%2==0)
        {
            count+=lower[i];
        }
        else{
            count+=lower[i]-1;
            odd=1;
        }

        if(upper[i]%2==0)
        {
            count+=upper[i];
        }
        else{
            count+=upper[i]-1;
            odd=1;
        }

    }
    count=count+odd;

    return count;
    
}


int main()
{
    string s;
    cout<<"Enter the string to find the longest Palindrome : ";
    getline(cin,s);
    int data=count_palindrome(s);
    cout<<endl<<"Longest string palindrome is "<<data;
}