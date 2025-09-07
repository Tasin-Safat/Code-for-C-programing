#include<stdio.h>
int main()
{
int row,col;


for(row=1;row<=4;row++){
//printing space 
for(col=1;col<=4-row;col++)
{
printf(" ");
}
//printing number
for(col=1;col<=row;col++)
{
printf("%d",row );
}
printf("\n");
}
}