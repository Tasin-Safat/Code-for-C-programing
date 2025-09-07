#include <stdio.h>
int main()
{
    int row,col;
    for(row=1; row<=5; row++) {
        for(col=1; col<=5; col++) {
            if(row==col || row+col==5+1)
            {   printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    }

}