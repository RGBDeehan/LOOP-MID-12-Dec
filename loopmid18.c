// SERIES (x^1+x^3+x^5+x^7+x^9) //

#include <stdio.h>
int main (){
int x,i,s,v;
printf("Enter 1st number: ");
scanf("%d",&x);

v=x; s=0;
for(i=1;i<=5;i++){

     s=s+v;
     v=v*x*x;
}
     // ANOTHER s=s+pow(x,i*2-i) //
printf("The summation of the series: %d\n",s);
   return 0;
}
