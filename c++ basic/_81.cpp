
#include<iostream>
using namespace std;

class Complex
{
    private: 
        int x,y;
    public:
        friend Complex operator+(Complex a,Complex b);

        void setData(int a,int b)
        {
            x=a;
            y=b;
        }
        void showData()
        {
            cout<<endl<<"x="<<x<<" y="<<y;
        }
        // Complex operator+(Complex c)
        // {
        //     Complex temp;
        //     temp.x=x+c.x;

        //     temp.y=y+c.y;
        //     cout<<endl<<"x:-"<<temp.x<<"y:-"<<temp.y;
        //     return temp;
        // }
};

Complex operator+(Complex a,Complex b)
{
    Complex temp;
    temp.x=a.x+b.x;
    temp.y=a.y+b.y;
    return temp;
}

int main()
{
    Complex C1,C2,C3;
    C1.setData(2,4);
    C2.setData(4,7);
    C1.showData();
    C2.showData();
    C3=C1+C2;
    C3.showData();
}