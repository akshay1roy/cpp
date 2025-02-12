
#include<stdio.h>
#include<conio.h>

int power_number(int num,int count)
{
    int n=1;
    while(count!=0)
    {
        n=n*num;
        count--;
    }
    return n;
}
int main()
{
    int num,i,count=0,temp,sum=0,rem,result=0;
    printf("\n Enter the number :- ");
    scanf("%d",&num);

    temp=num;
    while(temp!=0)
    {
        count++;
        temp=temp/10;
    }

    temp=num;

    while(temp!=0)
    {
        rem=temp%10;
        result=power_number(rem,count);
        sum=sum+result;
       
        temp=temp/10;
    }

    if(sum==num)
    {
        printf("\n %d is Armstrong Number ",num);
    }
    else{
        printf("\n %d is Not Armstrong Numebr ",num);
    }
    
}