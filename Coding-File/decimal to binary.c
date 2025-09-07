#include<stdio.h>
int main()
{
int i=1,decimal_num,binary_num=0,remainder;
printf("Enter the any decimal_num :");
scanf("%d",&decimal_num);
while(decimal_num !=0){
remainder=decimal_num%2;
decimal_num /=2;
i *=10;
binary_num +=remainder*i;



}
printf("Binary_num : %d\n",binary_num);








}