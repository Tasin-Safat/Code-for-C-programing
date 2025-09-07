#include<stdio.h>
int main()
{
    int numOfrows,numOfcols,i,j;
    int A[10][10],B[10][10],D[10][10];
    printf("Enter the number of row and col :");
    scanf("%d %d",&numOfrows,&numOfcols);


    printf("Enter elements for A matrix.\n "   );
    for(i=0;i<=numOfrows;i++)
    {
        for(j=0;j<=numOfcols;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");

    }
    printf("\n\nEnter elements for B matrix.\n "   );
    for(i=0;i<=numOfrows;i++)
    {
        for(j=0;j<=numOfcols;j++)
        {
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");

    }
    printf("A=  ");
    for(i=0;i<=numOfrows;i++)
    {
        printf("\t");
        for(j=0;j<=numOfcols;j++)
        {
            printf("%d ",A[i][j]);

        }
        printf("\n");

    }


     printf("\nB=  ");
    for(i=0;i<=numOfrows;i++)
    {
        printf("\t");
        for(j=0;j<=numOfcols;j++)
        {
            printf("%d ",B[i][j]);

        }
        printf("\n");

    }


     for(i=0;i<=numOfrows;i++)
    {
        for(j=0;j<=numOfcols;j++)
        {
              D[i][j] = A[i][j]+ B[i][j]);

        }

    }

      printf("\nA+B=  ");
    for(i=0;i<=numOfrows;i++)
    {
        printf("\t");
        for(j=0;j<=numOfcols;j++)
        {
            printf("%d ",D[i][j]);

        }
        printf("\n");

    }

}
