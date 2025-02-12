// program to print the star...

#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=10;j++){
            if(i==1){
                cout<<"*";
            }
            else{
                if(j<=6-i || j>4+i){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}


/*
              
**********
****  ****
***    ***
**      **
*        *



 */