#include<stdio.h>
int main()
{
int a[10][10],transpose[10][10],row,col,r1,c1,lowersum=0,uppersum=0;;
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
printf("%d ",a[row][col]);

}
printf("\n");

}
for(row=0;row<r1;row++){
for(col=0;col<c1;col++){
if(row<col)

uppersum=uppersum+a[row][col];
if(row>col)

lowersum=lowersum+a[row][col];
}
}
printf("The Sum of  Diagonal elemets %d",uppersum);
printf("The Sum of  Diagonal elemets %d",lowersum);


}

