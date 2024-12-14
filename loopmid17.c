// SERIES (x+x2+x3+x4+....+x10) //

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
printf("The summation of the series: %d\n",s);
   return 0;
}
