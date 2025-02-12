#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[30];
    int i,flag=1;
    printf("Enter the string :- ");
    gets(str);
    int l=strlen(str);
    for(i=0;i<l/2;i++)
    {
        if(str[i]!=str[l-1-i])
        {
            flag=0;
        }
    }
    if(flag==1)
    {
        printf("\n String is Palindrome ");
    }
    else{
        printf("\n String is not Palindrome");
    }

    return 0;
}