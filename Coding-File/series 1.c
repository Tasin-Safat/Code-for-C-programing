//1+2+3+....+nnl
#include <stdio.h>

int main() {
int i,sum=0,n;
printf("Enter the last value of n:");
scanf("%d",&n);
printf("1+2+3+4+5+6+7+...+ %d",n);
for(i=1;i<=n;i++)
sum=sum+i;
printf("=%d\n",sum);
}
