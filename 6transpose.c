#include<stdio.h>
#include<conio.h>

int main()
{
    int arr1[3][3],transpse[3][3];
    int i,j;

    printf("\n Enter the Matrices :- \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d ",&arr1[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            transpse[2-j][i]=arr1[i][j];
        }
    }


    printf("\n Transpose of the Matrics is :- \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",transpse[i][j]);
        }
        printf("\n");
    }
}