#include<stdio.h>
#include<conio.h>

int factorial(int num)
{
    int i,f=1;
    for(i=1;i<=num;i++)
    {
        f=f*i;
    }
    return f;
}
void main()
{
    int num,fact;
    printf("\n Enter the number to find factorial :- ");
    scanf("%d",&num);
    fact=factorial(num);
    printf("\n Factorial of %d is %d",num,fact);
}