// SERIES (x+x3+x5+x7+x9) //

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