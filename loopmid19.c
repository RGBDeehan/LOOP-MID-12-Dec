// SERIES (x^1/1+x^3/2+x^5/3+x^7/4+x^9/5) //

#include <stdio.h>
int main (){
int x,i,s,v;
printf("Enter 1st number: ");
scanf("%d",&x);

v=x; s=0;
for(i=1;i<=5;i++){

     s=s+v/i;
     v=v*x*x;
}

printf("The summation of the series: %d\n",s);
   return 0;
}
