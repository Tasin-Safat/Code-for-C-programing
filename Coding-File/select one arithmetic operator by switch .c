#include<stdio.h>
int main()
{
int c,a,b;
printf("1.Addition\n");
printf("2.Substraction\n");
printf("3.Addition\n");
printf("4.Multiplication\n");
scanf("%d",&c);
scanf("%d %d",&a,&b);
switch(c)
{
case 1: 
printf("Addition %d+%d=%d\n",a,b,a+b);
break;
case 2: 
printf("Substraction%d-%d=%d\n",a,b,a-b);
break;
case 3:
printf("Multiplication%d*%d=%d\n",a,b,a*b);
break;
case 4:
printf("Division%d/%d=%d\n",a,b,a/b);
break;
}
}