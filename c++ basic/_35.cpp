// progarm to printing the star...

#include<iostream>
using namespace std;

int main()
{
    int i,j;
    char k;
    for(i=1;i<=5;i++){
        k=65;
        for(j=1;j<=9;j++){
            if(j>=6-i && j<=4+i){
                cout<<k;
                if(j>=5){
                    k--;
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