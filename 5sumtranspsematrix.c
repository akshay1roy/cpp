
#include<stdio.h>
#include<conio.h>

int main()
{
    int a1[3][3],a2[3][3],sum[3][3],multi[3][3];
    int i,j;
    printf("Enter the First matrix :-  ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }

    printf("\n Enter the second matrices :-  ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a2[i][j]);
        }
    }

    printf("\n The sum of the Matrices is :- \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum[i][j]=a1[i][j]+a2[i][j];
            multi[i][j]=a1[i][j]*a2[i][j];
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }

    printf("\n Multiplication of Matrices is :- ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",multi[i][j]);
        }
        printf("\n");
    }


}