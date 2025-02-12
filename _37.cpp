// printing the alphabetic programing 

#include<iostream>
using namespace std;
int main()
{
    int i,j;
    char ch;
    for(i=1;i<=7;i++)
    {
        ch=65;
        for(j=1;j<=13;j++){
            if(j<=8-i || j>=6+i){
                cout<<ch;
                if(j>=6+i){
                    ch--;
                }
                else{
                    ++ch;
                }
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        
    }
}