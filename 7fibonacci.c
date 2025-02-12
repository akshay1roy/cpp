
#include<stdio.h>
#include<conio.h>

void fibonacci(int num)
{
    int a=0,b=1;
    int c=a+b;
    int i;
    for(i=1;i<=num;i++)
    {
        if(i==1)
        {
            printf(" %d ",a);
        }
        if(i==2)
        {
            printf("%d ",b);
        }

        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
}
int main()
{
    int num;
    printf("\n Enter the number to find fibonacci series :- \n ");
    scanf("%d",&num);
    fibonacci(num);
    return 1;
}