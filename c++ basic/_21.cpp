// program to print the fibonnaci series 

#include<iostream>
using namespace std;
{
    int n,i,a,b;
    cout<<"Enter the number ";
    cin>>n;
    a=0;
    b=1;
    if(n==0 ){
        cout<<a;
    }
    if(n==1){
        cout<<b;
    }
    for(i=2;i<=n;i++){
        cout<<a<<" "<<b;
        a=a+b;
        b=a+b;
    }

}