#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c,max;
    printf("\n Enter the three numbers:- ");
    scanf("%d %d %d",&a,&b,&c);
    max=(a>b && a>c?a:(b>c?b:c));
    printf("\n Greeatest numbr is %d",max);
    return 0;

}
