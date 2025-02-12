
//   c++ program to make the Simple Intrest program

#include<iostream>
using namespace std;
class Bank
{
    private :
        int p,r,t;
    public :
        Bank()
        {
            r=4;
            t=5;
            p=1000;
        }
        int Simple_Intrest()
        {
            int si;
            si=(p*t*r)/100;
            return si;
        }
};

int main()
{
    Bank b1;
    int data;
    data=b1.Simple_Intrest();
    cout<<endl<<"Simple intrest is "<<data;

}