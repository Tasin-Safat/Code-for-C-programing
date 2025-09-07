#include<stdio.h>
int main()
{
int a[]={10,20,30,3},i;
int max=a[0];
for(i=1;i<4;i++){
if(max<a[i]){
max=a[i];
}
}
printf("%d\n",max);

}
