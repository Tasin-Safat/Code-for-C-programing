#include<stdio.h>
int main(){
int row,col,A[2][2],B[2][2],C[2][2];

printf("Enter The all elements of \n");

for(row=0;row<2;row++){
for(col=0;col<2;col++){
printf("A[%d][%d]",row,col);
scanf("%d",&A[row][col]);
}
printf("\n");

}
for(row=0;row<2;row++){
for(col=0;col<2;col++){
printf("B[%d][%d]",row,col);
scanf("%d",&B[row][col]);
}
printf("\n");
}
printf("A=\n");
for(row=0;row<2;row++){
for(col=0;col<2;col++){
printf(" %d",A[row][col]);
}
printf("\n");
}
printf("B=\n");
for(row=0;row<2;row++){
for(col=0;col<2;col++){
printf(" %d",B[row][col]);
}
printf("\n");
}
for(row=0;row<2;row++){
for(col=0;col<2;col++){
C[row][col]=A[row][col]+B[row][col];
}
}

printf("C=\n");
for(row=0;row<2;row++){
for(col=0;col<2;col++){
printf(" %d",C[row][col]);
}
printf("\n");

}
int sum=0;
for(row=0;row<2;row++){
for(col=0;col<2;col++){
if(row==col){
sum=sum+C[row][col];
}
}
}
int uppersum,lowersum;
for(row=0;row<2;row++){
for(col=0;col<2;col++){
if(row<col){
 uppersum=sum+C[row][col];
}
}
}
for(row=0;row<2;row++){
for(col=0;col<2;col++){
if(row>col){
 lowersum=sum+C[row][col];
}
}
}
printf("The upper sum of c is %d\n",uppersum);
printf("The lower sum of c is %d\n",lowersum);


printf("The diagonal sum of c is %d\n",sum);
}