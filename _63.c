#include<stdio.h>
#include<conio.h>
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int combine(int n,int r)
{
    return fact(n)/ (fact(n-r)*fact(r)) ;
}
void pascal(int num)
{
    int i,j;
    for(i=0;i<num;i++)
    {
        for(j=0;j<num-i;j++)
        {
            printf(" ");
        }

        for(j=0;j<=i;j++)
        {
                
                printf("%d ",combine(i,j));
            
        }
        printf("\n");
    }
}

void main()
{
    int n;
    printf("\n Enter the number :-");
    scanf("%d",&n);
    pascal(n);
    getch();
}