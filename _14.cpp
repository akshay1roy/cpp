//  program  to check year is leap or not 

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Ente the year ";
    cin>>num;
    if(num%400==0){
        cout<<endl<<num<<" is leap year ";
    }else{
        if(num%4==0 && num%100!=0){
            cout<<endl<<num<<" is leap year";
        }
        cout<<endl<<num<<" is not a leap year";
    }
    return 0;
}