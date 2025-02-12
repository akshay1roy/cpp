
#include<iostream>
using namespace std;

Class Student
{
    private:
        int x,y;
    public:
        
        Student(int a,int b)
        {
            x=a;
            y=b;
        }
        Student (Student &p)
        {
            x=p.x;
            y=p.y;
        }
        Student operator+(const Student p)
        {
            Student temp;
            temp.x=x+p.x;
            temp.y=y+p.y;
            return temp;
        }

        void showData()
        {
            cout<<"x:- "<<x<<"y:- "<<y;
        }
};

int main()
{
    Student p1(3,5);
    p1.showData();
    // Student p2=p1;
    // Student p3;
    // p3=p1+p2;
    // p2.showData();
    // p3.showData();
}