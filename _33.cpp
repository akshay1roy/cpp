// printing the number 

#include<iostream>
using namespace std;
int main()
{
    int i,j,k=1;
    for(i=1;i<=4;i++){
        k=1;
        for(j=1;j<=7;j++){
            if(j>=i && j<=8-i){
                cout<<k;
                if(j>=4){
                    --k;
                }
                else{
                    k++;
                }
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}