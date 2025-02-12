
#include<stdio.h>
#include<conio.h>

void interchange(int a,int b)
{
    int c;
    c=b;
    b=a;
    a=c;

}
int main()
{
    int a,b;
    printf(" Enter the two numebers :- ");
    scanf("%d%d ",&a,&b);
    printf("\n Before swaping : - a= %d and  b=%d ",a,b);
    interchange(a,b);
    printf("\n After swaping :- a=%d  and b=%d ",a,b);
    
}