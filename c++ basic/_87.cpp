
//  template 

#include<iostream>
using namespace std;
template <class Temp>

Temp add(Temp x,Temp y)
{
    return x+y; 
}
int main()
{
   float sum=add<flaot  >(2.3,4.5);
   cout<<"Additio of two number is "<<sum;
   int sum1=add<int>(5,6);
   cout<<"Additio of two number is "<<sum;

}