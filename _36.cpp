// program to printing the patter of Alphabets

#include<iostream>
using namespace std;

int main()
{
    int i,j;
    char ch;
    for(i=1;i<=4;i++){
        ch=65;
        for(j=1;j<=7;j++){
            if(j>=i && j<=8-i){
                cout<<ch;
                if(j>=4){
                    ch--;
                }
                else{
                    ch++;
                }
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}