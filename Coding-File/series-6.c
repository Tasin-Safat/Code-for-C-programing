// 1+1/2+1/3+..1/n
#include<stdio.h>
int main()
{
double i,n,sum=0;
printf("Enter n=");
scanf("%lf",&n);
for(i=1;i<=n;i++)
{
sum=sum + (1/i);
if(i==1)
printf("1/%lf +",i);
else if(i==n)
printf("1/%lf",i);
else printf("1/%lf +",i);
}
printf("sum= %lf\n",sum);
return 0;

}
