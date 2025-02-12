
#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[10],sum=0,avg=0,i;
    printf("Ente the 10 elements ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<10;i++)
    {
        sum=sum+arr[i];
    }

    avg=sum/10;

    printf("\n Sum of all Elememts in array is %d",sum);
    printf("\n Average of the all Elements is %d",avg);

    return 1;
}