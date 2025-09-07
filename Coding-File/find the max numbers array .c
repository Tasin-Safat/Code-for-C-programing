#include<stdio.h>
int main()
{
int index, marks[5],sum;
float average;

for(index=0;index<=5;index++){


printf("Enter The students marks[%d]",index );
scanf("%d",&marks[index]);
}
for(index=0;index<=1;index++){
sum=sum+index;

}

printf("The Sum is : %d\n",marks[index]);
average=(float) sum/5;
printf("Avergae is :%f\n",average);




}