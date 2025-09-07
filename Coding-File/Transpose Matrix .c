#include<stdio.h>
int main()
{
int a[10][10],transpose[10][10],row,col,r1,c1;
printf("Enter The number of row and col:");
scanf("%d %d",&r1,&c1);
for(row=0;row<r1;row++){
for(col=0;col<c1;col++){
scanf("%d ",&a[row][col]);
}
}

printf("a= ");
for(row=0;row<r1;row++){
for(col=0;col<c1;col++){
printf("%d ",a[col][row]);

}
printf("\n");

}
}

