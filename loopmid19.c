// SERIES (x/1+x3/2+x5/3+x7/4+x9/5) //

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
// ANOTHER s=s+pow(x,i*2-i) //
printf("The summation of the series: %d\n",s);
   return 0;
}
