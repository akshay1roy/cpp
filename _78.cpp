
#include<iostream>
using namespace std;
class Box
{
    private:
       int  l,b,h;
    public :
        Box()
        {
            l=8;
            b=7;
            h=10;
        }
        Box(int len,int br,int hei)
        {
            l=len;
            b=br;
            h=hei;
        }
        setData(int len,int br,int hei)
        {
            l=len;
            b=br;
            h=hei;
        }
        void showData()
        {
            cout<<"Length "<<l<<" Breadth:- "<<b<<" Height:-"<<h;

        }
        void showVolume()
        {
            int v;
            v=l*b*h;
            cout<<"Volumn is :- "<<v;
        }
};

int main()
{
    Box b1,b2,b3(2,3,4);
    int l,b,h;
    cout<<"Enter the length , breadth and height of the box:-";
    cin>>l>>b>>h;
    cout<<"B1 object is "<<endl;
    b1.showVolume();
    cout<<endl<<"B2 object is "<<endl;
    b2.setData(l,b,h);
    b2.showVolume();
    cout<<endl<<"B3 object is "<<endl;
    b3.showVolume();

}