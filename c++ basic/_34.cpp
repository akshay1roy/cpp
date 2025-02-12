// program to print the number 

#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++){
        k=1;
        for(j=1;j<=7;j++){
            if(j<=5-i || j>=3+i){
                //  cout<<k;
                // if(j>=3+i){
                //    k=k-2;
                                        // facing error 
                // }
                // else{
                //     k++;
                // }
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}