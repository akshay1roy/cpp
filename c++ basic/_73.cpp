#include<iostream>
using namespace std;

class Item
{
    private:
        int a,b;
        public:
            int  factorial(int n)
            {
                int f=1,i;
                for(i=1;i<=n;i++)
                {
                    f=f*i;
                }
                return f;
            }

            int larget_number(int a,int b,int c)
            {
                if(a>b && a>c)
                {
                    return a;
                }
                else{
                    if(b>c && b>a)
                    {
                        return b;
                    }
                    else{
                        return c;
                    }
                }
            }

            int reverse(int num)
            {
                int rem,n=0;
                while(num!=0)
                {
                    rem=num%10;
                    n=n*10+rem;
                    num=num/10;
                }
                return n;
            }


};

int main()
{
    Item t1;
    int f,num,a,b,c,large;
    cout<<"Enter the number to find factorial :-";
    cin>>f;
    num=t1.factorial(f);
    cout<<num<<" is the factorial ";
    cout<<endl<<"Enter three number a, b and c";
    cin>>a>>b>>c;
    large=t1.larget_number(a,b,c);
    cout<<"The largest number is "<<large;

    int rev;
    cout<<"Enter the number to reverse:-";
    cin>>rev;
    large=t1.reverse(rev);
    cout<<endl<<"Reverse of the number is :-"<<large;

}