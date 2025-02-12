
#include<iostream>
using namespace std;

class Student
{
    private:
        int x,y;
    public: 
        Student()
        {

        }

        Student(int a,int b)
        {
            x=a;
            y=b;
        }

        void showData()
        {
            cout<<"x:- "<<x<<" y:-"<<y;
        }

        Student (Student &s)
        {
            x=s.x;
            y=s.y;
        }

        Student operator+(Student s)
        {
            Student temp;
            temp.x=x+s.x;
            temp.y=y+s.y;
            return temp;
        }
        // for post fix increament  operator++(int )
        Student operator++(int )        // pre increament 
        {
            x++;
            y++;
        }  

        Student operator++()
        {
            x++;
            y++;
        }
        // for pre fix increaemnt  operator-()

    //    extraction oprator overloading

    friend ostream& operator<<(ostream &os,Student p);
};

ostream& operator<<(ostream &os, Student p)
{
    cout<<endl<<"x:- "<<p.x<<" y:-"<<p.y;
    return os;
}
int main()
{
    Student p1(2,3),p2,p3;
    p1.showData();
    p2=p1;
    p3=p1+p2;
    cout<<endl;
    p3.showData();
    p3++;
    Student p4=p3;
    cout<<endl;
    p2.showData();
    cout<<endl;
    p3.showData();
    cout<<endl<<"P3 print hoga :-"<<endl;
    cout<<p3<<endl<<p2;


}