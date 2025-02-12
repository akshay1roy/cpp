#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

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

void inputData(struct Array *arr,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr->A[i]);
    }
}

void insert_data(struct Array *arr)
{
    int num,i,index;
    printf("\n Enter the number :-");
    scanf("%d",&num);
    printf("\n Enter the position :-");
    scanf("%d",&index);

    for(i=arr->length;i>=index;i--)
    {
        arr->A[i]=arr->A[i-1];
    }
    arr->A[index-1]=num;
    arr->length++;
}

void delete_data(struct Array *arr)
{
    int i,index;
    printf("\n enter the index number  to delete :-");
    scanf("%d",&index);

    for(i=index;i<arr->length;i++)
    {
        arr->A[i-1]=arr->A[i];
    }
    arr->length--;
    
}

void Append(struct Array *arr)
{
    int i,num;
    printf("\n Enter the number :-");
    scanf("%d",&num);
    arr->A[arr->length]=num;
    arr->length++;
}

int  Get_number_by_index(struct Array *arr)
{
    int i,index;
    printf("\n Enter the index to get number :-");
    scanf("%d",&index);

    return arr->A[index-1];
}

void search(struct Array *arr)
{
    int i,num,flag=0;
    printf("\n Enter the number to search:-");
    scanf("%d",&num);

    for(i=0;i<arr->length;i++)
    {
        if(num==arr->A[i]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("\n Number is found %d",num);
    }
    else{
        printf("\n  Number is not found %d",num);
    }

}

int main()
{
    struct Array arr;
    int i,n,num,index,number;
    printf("\n  Enter the size of the array :-");
    scanf("%d",&arr.size);

    arr.A=(int *)malloc(arr.size*sizeof(int));
    printf("print how many number you wants to print:-");
    scanf("%d",&n);

    inputData(&arr,n);
    arr.length=n;

    printf("\n All elements are :-");
    display(arr);
    printf("\n lenght of array is :-%d",arr.length);
    
    insert_data(&arr);

    // printf("\n All elements are :-");
    // display(arr);

    //  printf("\n lenght of array is :- %d",arr.length);

    // delete_data(&arr);

    display(arr);

    printf("\n lenght of array is :- %d",arr.length);
    // Append(&arr);
    number=Get_number_by_index(&arr);
    printf("\n Number is :- %d",number);
    display(arr);
    // printf("\n lenght of array is :- %d",arr.length);




}