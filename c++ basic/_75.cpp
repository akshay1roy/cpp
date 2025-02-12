#include<iostream>
using namespace std;
class Complex 
{
    private:
        int a, b;
    public :
        void setData(int x,int y)
        {
            a=x;
            b=y;
        }
        void showData()
        {
            cout<<"a:-"<<a<<" "<<"  b:-"<<b;
        }
        Complex add(Complex C)
        {
            Complex temp;
            temp.a=a+C.a;
            temp.b=b+C.b;
            return temp;
        }
};


int main()
{
    Complex c1,c2,c3;
    int a,b;
    cout<<"Enter the two number :-";
    cin>>a>>b;
    c1.setData(a,b);
    c1.showData();
    c2.setData(3,6);
    c2.showData();
    c3=c1.add(c2);
    c3.showData();


}