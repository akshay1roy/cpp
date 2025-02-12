
#include<iostream>
using namespace std;
template <class T1=int ,class T2=int ,class T3=int >

class Data
{
    private:
        T1 x;
        T2 y;
    public:
        void setData(int a,int b)
        {
            x=a;
            y=b;
        }
        void showData()
        {
            cout<<"x:- "<<x<<" y:-"<<y;
        }
        int add()
        {
            return x*y;
        }
};

int main()
{
    Data <int ,int> D1;
    D1.setData(3,5);
    D1.showData();
}
