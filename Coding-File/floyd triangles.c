#include <stdio.h>
int main()
{
    int row,col,count=0;
    for(row=1; row<=5; row++) {
        for(col=1; col<=row ; col++)
            { printf("%d ",++count);
        }
        printf("\n");
    }

}