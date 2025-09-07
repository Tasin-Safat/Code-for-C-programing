#include<stdio.h>
int main()
{
int choice;
float temp,convertedtemp;

printf("Enter The choice ");
scanf("%d",&choice);


switch(choice)
{
case 1: 
{
printf("Enter The celcius value :");
scanf("%f",&temp);
convertedtemp=(temp-32)/1.8;
printf("Fahrenheit  Temperature : %f\n",convertedtemp);
break ;

}
case 2: 
printf("Enter The Farenheit value :");
scanf("%f",&temp);
{convertedtemp=(1.8*temp)+32;
printf("Celcius Temperature : %f\n",convertedtemp);
break ;
}
default : printf("All normal number :\n");

}
return 0;





}