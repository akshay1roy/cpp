// program of ADT Array.

#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct Array{
    int *A;
    int size;
    int length;
};

void display(struct Array arr)
{
    int i;
    for(i=0;i<arr.length;i++)
    {
        printf("%d ",arr.A[i]);
    }
}

int main()
{
    struct Array arr;
    int i,n;
    printf("Enter the size of the array:-");
    scanf("%d",&arr.size);
    arr.A=(int *)malloc(arr.size*sizeof(int));
    arr.length=0;

    printf("\n Enter number of numbers:-");
    scanf("%d",&n);
    printf("\n Enter all elements:-");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr.A[i]);
    }

    arr.length=n;

    printf("\n All elements are:-");
    display(arr);

    getch();
}