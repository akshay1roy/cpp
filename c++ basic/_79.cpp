
#include<iostream>
using namespace std;

class Bill
{
    private:
        int r2=2,r3=3;
        float r1=1.20;
        float cost,unit_data;
    public:
       
        void setData(int unit)
        {
            if(unit<100)
            {
                cost=r1;
                unit_data=unit;
            }
            if(unit>100 && unit<200)
            {
                cost=r2;
                 unit_data=unit;
            }
            if(unit>200){
                cost=r3;
                unit_data=unit;
            }
        }

        int CalculateBill()
        {
            return unit_data*cost;
        }
};

int main()
{
    Bill b1;
    int unit,bill;
    cout<<"Enter the how many unit ";
    cin>>unit;
    b1.setData(unit);
    bill=b1.CalculateBill();
    cout<<endl<<"Bill is "<<bill;
}