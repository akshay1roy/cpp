
#include<iostream>
using namespace std;

class Counting
{
    private:
        int count;
        static int k;
    public:
        static void set_static(int num)
        {
            k=num;
        }
        static void show_static()
        {
            cout<<endl<<"static number is :-"<<k;
            k++;
        }
};
int Counting::k;

int main()
{
    Counting c1,c2;
    int num;
    cout<<"Enter the number :-";
    cin>>num;
    Counting::set_static(num);
    // Counting::show_static();
    c2.show_static();
    // Counting::show_static();
    // Counting::show_static();
    c2.show_static();
    c2.show_static();
    
}