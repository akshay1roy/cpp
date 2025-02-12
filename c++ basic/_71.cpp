#include<iostream>
using namespace std;
class Complex
{
    private:
        int x,y;
    public:
         void SetData(int a,int b)
         {
             x=a;
             y=b;
         }
         void showData()
         {
            cout<<" x= "<<x<<" y= "<<y;
         }
};


int main()
{
    Complex c1;
    int a,b;
    cout<<"\n Enter real and img part :-";
    cin>>a>>b;
    c1.SetData(a,b);
    c1.showData();

}