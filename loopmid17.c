// SERIES (x^1+x^2+x^3+x^4+....+x^10) //

#include <stdio.h>
int main (){
int x,i,s,v;
printf("Enter 1st number: ");
scanf("%d",&x);

v=x; s=0;
for(i=1;i<=10;i++){

     s=s+v;
     v=v*x;
}
     // ANOTHER s=s+pow(x,i); //
printf("The summation of the series: %d\n",s);
   return 0;
}
