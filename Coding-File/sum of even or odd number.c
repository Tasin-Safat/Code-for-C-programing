#include<stdio.h>
int main()
{

int i,n,even_sum=0,odd_sum=0;
scanf("%d",&n);
    for(i=0; i<=n; i++)
    { if(i%2==0){
        even_sum=even_sum+i;}
        else {
        odd_sum=odd_sum+i;
        }
      }  
        
printf("The sum_even value is=%d\n",even_sum);

printf("The odd_even value is=%d\n",odd_sum);
}
