
#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int main()
{


    string s1="GeeksforGeeksistofi";
    // string s2;
    cout<<endl<<"The length of string is :-"<<s1.length();
    cout<<endl<<"The capacity of string is :-"<<s1.capacity();

    // strcpy(s2,s1);
    // cout<<endl<<"The copy string is :-"<<s2;

    s1.resize(10);
    cout<<endl<<"After resizing the string is "<<s1;
    cout<<endl<<"Length of the sting is "<<s1.length();

    s1.resize(20);

    cout<<endl<<"Again resizing the string is :-"<<s1;
    cout<<endl<<"Length of string is :-"<<s1.length();

    cout<<endl<<"shrink_to_fit";
    s1.shrink_to_fit();
    cout<<endl<<"The capacity after using shink to fit function is "<<s1;
    cout<<endl<<"size of new string is :-"<<s1.length();



    
    // string s1="hello world my name is akshay kumar.";
    // string s2="Akshay kumar";
    // cout<<"Enter the string :- ";
    // // getline(cin,s1);
    // cout<<"S1:- "<<s1;
    // cout<<"S2:- "<<s2;

    // strncpy(s2,s1);
    // cout<<endl<<"After copying data :-"<<s2;
    // cout<<endl<<"size :- "<<s1.size();
    // cout<<endl<<"Resize :-"<<s1.resize(5);

    // for(int i=0;i<s1.length();i++)
    // {
    //     cout<<s1.at(i);
    // }
    // cout<<endl<<s1;
    // cout<<endl<<s2;
    // cout<<endl<<"-------After swaping------------";
    // swap(s1,s2);
    // cout<<endl<<" first :- "<<s1;
    // cout<<endl<<"second :- "<<s2;



    // string s1;
    // cout<<"Enter the string :- ";
    // getline(cin,s1);
    // for(int i=0;i<s1.length();i++)
    // {
    //     cout<<s1.at(i);
    // }


    // string str;
    // string str1;
    // cout<<"Enter the string :-";
    // getline(cin,str);
    // cout<<endl<<"String is :- "<<str;

    // cout<<endl<<"String length is "<<str.length();
    // strncpy(str,str1);
    // cout<<endl<<"Copy string is :-"<<str1;

    // cout<<endl<<"Size of string is :-"<<str1.size();



//     string s;
//     string p;
//     cout<<"Enter the string:-";
//     getline(cin,s);
//     cout<<"String is :-"<<s;
//     int l=0;
//     for(int i=0;s[i]!='\0';i++)
//     {
//         if(s[i])
//         l++;
//     }


//     cout<<endl<<"Length of string is :-"<<l;


}