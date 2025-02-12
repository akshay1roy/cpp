#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
// void inputData(struct Array arr, int,int );
struct Array
{
    int *A;
    int size;
    int length;
};


void make_array_size(struct Array *arr,int num)
{
    arr->size=num;
    arr->A=(int *)malloc(arr->size*sizeof(int));
}


void inputData(struct Array *arr,int num)
{
    int i;
    for(i=0;i<num;i++)
    {
        scanf("%d",&(*arr)->A[i]);
    }
    // *()
    arr->length=num;
}

void display(struct Array arr)
{
     printf("\n Display the all data:-");
    int i;
    for(i=0;i<arr.length;i++)
    {
        printf("%d ",arr.A[i]);
    }
}

void insertData(struct Array arr,int index,int num)
{
    int i;
    if(arr.length==arr.size)
    {
        printf("\n Array is full !!");
       
    }
    else
    {
        for(i=arr.length;i>=index;i--)
        {
            arr.A[i]=arr.A[i-1];
        }
        arr.A[index]=num;
        arr.length=arr.length+1;
    }
    
}

int main()
{
    struct Array arr;
    int i,n,size,num,index;
    printf("\n Enter the size of the array :-");
    scanf("%d",&size);
    make_array_size(&arr,size);
    // printf("\n Array size :- %d",arr.size);

    printf("\n How many numbers are input :- ");
    scanf("%d",&n);
    // arr.length=n;
    // printf("\n Array length :-%d\n",arr.length);
    printf("\n Enter number :- ");
    inputData(&arr,n);
    printf("\n Display the all data:-");
    display(arr);

    // printf("\n Insert at first :-");
    printf("\n Enter the number to add:-");
    scanf("%d",&num);
    printf("\n Enter the place to insert:-");
    scanf("%d",&index);
    printf("\n Array length :-%d\n",arr.length);
    insertData(arr,index,num);
    printf("\n Array length :-%d\n",arr.length);
    display(arr);
    printf("\n Array length :-%d\n",arr.length);
    getch();
}