#include<stdio.h>
#include<conio.h>
void print_Natural(int n)
{
    if(n)
    {
        print_Natural(n-1);
    
    }
    else
    {
         return ;
    }
    printf("%d ",n);
    
}

void print_Natural_Number(int n)
{
    if(n<0)
    {
        return ;
    }
    else{
        print_Natural(n-1);
        printf("%d ",n);
    }
}

void Print_Even_Number(int n)
{
    if(n<=0)
    {
        return ;
    }
    else{
        Print_Even_Number(n-1);
        printf("%d ",n*2);
    }
}

void Print_all_even_number(int num)
{
    if(num<=0){
        return ;
    }
    else{
        Print_all_even_number(num-1);
        if(num%2==0)
        {
            printf("%d ",num);
        }
    }
}

void print_Natural_reverse(int num)
{
    if(num<=0)
    {
        return ;
    }
    else{
        printf("%d ",num);
        print_Natural_reverse(num-1);
    }
}

void Print_Odd_number(int num)
{
    if(num<=0)
    {
        return ;
    }
    else{
        Print_Odd_number(num-1);
        printf("%d ",2*num-1);
    }
}

void print_odd_number(int num)
{
    if(num<=0)
    {
        return ;
    }
    else{
        print_odd_reverse(num-1);
       if(num%2!=0){
        printf("%d ",num);
       }
    }
}

void print_odd_reverse(int num)
{
    // int num;
    if(num<0){
        return ;
    }
    else{
        if(num%2!=0){
            printf("%d ",num);
        }
        print_odd_reverse(num-1);
    }
}




void main()
{
    int n;
    printf("\n Enter the number :-");
    scanf("%d",&n);
    // print_Natural(n);
    // print_Natural_Number(n);
    // Print_Even_Number(n);
    // print_Natural_reverse(n);
    // Print_Odd_number(n);
    print_odd_reverse(n);
    getch();
}