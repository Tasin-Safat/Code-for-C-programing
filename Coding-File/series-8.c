//1^2X2^2X3^2x....xN^2
#include<stdio.h>

int main()
{
    int i,n,result=1;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        result=result*(i*i);
        
    }printf("1^2X2X2X3^2+...+%d^2=",n);
    printf("%d\n",result);


}