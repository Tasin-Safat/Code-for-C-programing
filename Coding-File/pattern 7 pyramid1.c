#include <stdio.h>
int main()
{
int row,col;
for(row=1;row<=10;row++){
//printing space
for(col=1;col<=10-row;col++){
printf(" ");}
//printing star
for(col=1;col<=2*row-1;col++){
printf("%c",col+64);
}
printf("\n");

}

}