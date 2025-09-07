#include<stdio.h>
int main()
{

int firstnum=0,secondnum=1,next,i,n;
scanf("%d",&n);
    for(i=0; i<=n; i++)
    { if(i<=1){
     next=i;
     }
      
      else {
      next=firstnum+secondnum;
      firstnum=secondnum;
      secondnum=next;
        }
        
printf("%d ",next);
}
}
