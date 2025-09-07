#include<stdio.h>
int main(){
int row,col,n;
printf("Enter The N");
scanf("%d",&n);
int A[n][n],B[n][n],C[n][n];
printf("Enter The elements of ");
for(row=0;row<n;row++){
for(col=0;col<n;col++){
printf("A[%d][%d]",row,col);
scanf("%d",&A[row][col]);
}
}

for(row=0;row<n;row++){
for(col=0;col<n;col++){
printf("B[%d][%d]",row,col);
scanf("%d",&B[row][col]);
}
}
printf("A=\n");
for(row=0;row<n;row++){
for(col=0;col<n;col++){
printf(" %d",A[row][col]);
}
printf("\n");
}
printf("B=\n");
for(row=0;row<n;row++){
for(col=0;col<n;col++){
printf(" %d",B[row][col]);
}
printf("\n");
}
for(row=0;row<n;row++){
for(col=0;col<n;col++){
C[row][col]=0;
for(int col1=0;col1<n;col1++){
C[row][col]=C[row][col]+A[row][col1]*B[col1][col];
}
}
}
printf("The mul of C=\n");
for(row=0;row<n;row++){
for(col=0;col<n;col++){
printf(" %d",C[row][col]);
}printf("\n");
}
}



