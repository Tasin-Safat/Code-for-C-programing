#include <stdio.h>
int main()
{
int row,col;
for(row=5;row>=1;row--){
for(col=1;col<=5-row;col++){
printf(" ");}
//printing star
for(col=1;col<=2*row-1;col++){
printf("%c",col+64);
}
printf("\n");

}

}