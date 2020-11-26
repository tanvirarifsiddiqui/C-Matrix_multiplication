
#include<stdio.h>
int main()
{
    int A[3][4],B[3][4],C[3][4];
    int i,j,k,r1,c1,r2,c2, sum=0;
    printf("Enter the first matrix row:");
    scanf("%d",&r1);
    printf("Enter the first matrix column:");
    scanf("%d",&c1);

    printf("Enter the second matrix row:");
    scanf("%d",&r2);
    printf("Enter the second matrix column:");
    scanf("%d",&c2);
    while(c1!=r2)
    {
        printf("Error!!! Column of first matrix is not equal to row of second matrix\n");
        printf("Enter the first matrix row:");
        scanf("%d",&r1);
        printf("Enter the first matrix collum:");
        scanf("%d",&c1);

        printf("Enter the second matrix row:");
        scanf("%d",&r2);
        printf("Enter the second matrix column:");
        scanf("%d",&c2);
    }
    printf("Enter elements of matrix A:\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("Enter A[%d][%d]: ",i+1,j+1);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("Matrix A= \n");
    for(i=0; i<r1; i++)
    {
        printf("\t\t");
        for(j=0; j<c1; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    //matrix B

    printf("\n\nEnter elements of matrix B:\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("Enter A[%d][%d]: ",i+1,j+1);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B= \n");
    for(i=0; i<r2; i++)
    {
        printf("\t\t");
        for(j=0; j<c2; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    //multiplication:

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum=sum+
                A[i][k]*B[k][j];
            }
            C[i][j]=sum;
            sum=0;
        }
    }
    printf("Matrix (A x B)= \n");
    for(i=0; i<r1; i++)
    {
        printf("\t\t");
        for(j=0; j<c2; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");

    }
    printf("Thanks for Using this program\nProgrammed by Md. Tanvir Arif Siddiqui.");
    return 0;
}


