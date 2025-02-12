
#include<stdio.h>
#include<conio.h>

void swaping(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
int  main()
{
    int a,b;
    printf("Enter two number :- ");
    scanf("%d %d",&a,&b);
    printf("\n Before Swapping a= %d and b=%d ",a,b);
    swaping(&a,&b);
    printf("\n After swapping a=%d and b=%d",a,b);
    return 0;
}