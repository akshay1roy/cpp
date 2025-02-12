#include<iostream>
using namespace std;
class Time
{
    private:
        int h,m,s;
    public :
        void setTime(int hr,int min,int sec)
        {
            h=hr;
            m=min;
            s=sec;
        }
        void showData()
        {
            cout<<h<<"hr"<<" "<<m<<"min"<<" "<<20<<"sec";
        }
};

int main()
{
    Time t1;
    int h,m,s;
    cout<<"Enter hour , minute and second ";
    cin>>h>>m>>s;
    t1.setTime(h,m,s);
    t1.showData();
}