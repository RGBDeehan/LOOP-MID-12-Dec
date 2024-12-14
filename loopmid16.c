// SUMMATION FOR NORMAL SERIES (1+3+5+7......+n) //

#include <stdio.h>
int main () {
int x,i,s,v,y;
printf("Enter 1st number: ");
scanf("%d",&x);
printf("Enter last number: ");
scanf("%d",&y);
  v=x;
  s=0;
   for(i=x;v<=y;i++){
    s=s+v;
    v=v+2;
   }  
printf("The summation of the series: %d\n",s);
return 0;
}
