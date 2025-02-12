#include<stdio.h>
#include<conio.h>

int main()
{
    int num,temp=0,i;
    printf("\n Enter the number :- ");
    scanf("%d",&num);

    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            temp=1;
        }
    }
    if(temp==0)
    {
        printf("\n %d is Prime Number ",num);
    }
    else{
        printf("\n %d is not Prime Number ",num);
    }

    return 0;
}