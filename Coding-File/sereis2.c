#include <stdio.h>

int main() {
int i=1,sum=0,n;
printf("Enter the last value of n:");
scanf("%d",&n);
printf("1+3+5+7+9+10+12+...+ %d",n);

while(i<=n){
sum=sum+i;
i=i+2;
}
printf(" =%d",sum);
}
