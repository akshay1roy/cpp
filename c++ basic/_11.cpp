//    program to roatate the number by one positon towards right .

#include<iostream>
using namespace std;
int cout_letter(int num,int n)
{
    int i=0,res=1,rem=num;
    while(num!=0)
    {
        i++;
        num=num/10;
        
    }
    while(i!=0){
        res=res*10;
        i--;
    }
    res=res*n+rem;
    return res;
   
}


int main()
{
    int num,n,count,res;
    cout<<"Enter the number ";
    cin>>num;
    cout<<endl<<"Number is "<<num;
    n=num%10;
    res=num/10;
    count=cout_letter(res,n);
    //cout<<endl<<"count number is "<<count;
    cout<<endl<<"After one right shift new number is "<<count;
    return 0;

}