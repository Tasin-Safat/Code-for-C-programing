#include<stdio.h>
int main(){

int row,col,A[3][2];
for(row=0;row<3;row++){
for(col=0;col<2;col++){
scanf("%d ",&A[row][col]);
}
}
for(row=0;row<3;row++){
for(col=0;col<2;col++){
printf("%d ",A[row][col]);

}


printf("\n");



}
}
