#include<stdio.h>
int main()
{
int a=10,b=5,c;

//Arithmetic operator
printf("Arithmetic operator :\n");
printf("Addiction = %d\n",c=a+b);
printf("subtraction = %d\n",c=a-b);
printf("multiplication = %d\n",c=a*b);
printf("Division  =%d\n",c=a/b);
printf("remainder = %d\n",c=a&b);




//unary operator 
printf(" Unary operator\n");
printf("++a =%d\n",++a);
printf("--a =%d\n",--a);
printf("a++ =%d\n",a++);
printf("a--=%d\n",a--);



//relational operator 
printf("Relational operator\n");
printf("a==b = %d\n", a==b);
printf(" a!=b = %d\n",a!=b);
printf("a>b = %d\n", a>b);
printf("a>=b = %d\n", a>=b);
printf("a<b = %d\n", a<b);
printf("a>=b = %d\n", a>=b);






//logical operator
printf("Logical operator\n");
printf("a>9 && b>4 =%d\n", a>9 && b>4);
printf("a>9 or b<4=%d\n", a>9 || b<10);




//conditional operator;or Ternary operator
printf("Conditional operator \n");

c= (a>b) ? a:b;
printf("c= (a>b) ? a:b =%d \n",c);
c= (a>b) ? a:b;
printf("c= (a<b) ? a:b =%d \n",c);

//aasignment operator
printf("assignment operator\n");
printf("a=b %d\n",a=b);
printf("a*=b %d\n",a*=b);
printf("a/=b %d\n",a/=b);
printf("a+=b %d\n",a+=b);
printf("a-=b %d\n",a-=b);

//bitwise operator
printf("bitwise operator\n");
printf("a&b =%d\n",a&b);
printf("a/b =%d\n",a/b);
printf("a^b =%d\n",a^b);
printf("c =~a %d\n",c=~a);

//sizeof
printf("sizeof int = %lu\n",sizeof(int));


//to upper
char ch='a';

printf("upper = %c\n", toupper(ch));

printf("lower = %c\n", tolower(ch));





return 0;
}