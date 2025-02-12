#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i=0,j,rem;
    int arr[20];
    printf("\n Enter the decimal number :-");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%2;
        arr[i]=rem;
        i++;
        num=num/2;
    }
    printf("\n The deciaml number is :-");
    for(j=0;j<i;j++)
    {
        printf("%d ",arr[j]);
    }
}