// progam to print the factors 

#include<iostream>
using namespace std;

void print_prime_factor(int n)
{
    int i;
    while(n!=0){
        for(i=2;i>=1;i++){
            if(n%i==0){
                cout<<i<<" ";
                n=n/i;
                break;
            }
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the number :-";
    cin>>n;
    print_prime_factor(n);
    return 0;
}