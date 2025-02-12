#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void take_input(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
}

void display(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}


int  main()
{
    int n;
    int *arr;
    printf("Enter how many numbers of elements are taken from user:-");
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    take_input(arr,n);
    display(arr,n);
    getch();
}