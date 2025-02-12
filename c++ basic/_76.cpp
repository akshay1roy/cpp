
#include<iostream>
using namespace std;
class Time
{
    private:
        int h,m,s;
    public:
        void setTime(int hr,int min,int sec)
        {
            h=hr;
            m=min;
            s=sec;
        }
        void showTime()
        {
            cout<<endl<<h<<"hr "<<m<<"min "<<s<<"sec";
        }
        Time add(Time t1)
        {
            Time temp;
            int count=0;
            temp.s=s+t1.s;
            if(temp.s>60)
            {
                temp.s=temp.s%60;
                count++;
            }
            temp.m=m+t1.m+count;
            count=0;
            if(temp.m>60){
                temp.m=temp.m%60;
                count++;
            }
            temp.h=h+t1.h+count;
            return temp;
            

        }
};

int main()
{
    Time t1,t2,t3;
    int hr,min,sec;
    cout<<"Enter the time hr, min ,sec";
    cin>>hr>>min>>sec;
    t1.setTime(hr,min,sec);
    t1.showTime();
    t2.setTime(2,34,53);
    t2.showTime();
    t3=t1.add(t2);
    cout<<endl<<"After adding :- ";
    t3.showTime();

}