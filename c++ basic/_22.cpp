// program to print the next prime number 


#include<iostream>
using namespace std;
int check_Prime(int num){
    int i;
    for(i=2;i<num;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}

int next_prime(int num){
    int i;
    for(i=num+1;i>1;i++){
        if(check_Prime(i)){
            return i;
        }
    }
}
int main()
{
    int num,i;
    cout<<"Enter the number :-";
    cin>>num;
    num=next_prime(num);
    cout<<endl<<"Next prime number is "<<num;
    return 0;
}