// SERIES (x^3/2!+x^5/3!+x^7/4!+x^9/5!) //

#include <stdio.h>
int main (){
int x,i,s,v,w;
printf("Enter 1st number: ");
scanf("%d",&x);

v=x; s=0;w=1;
for(i=1;i<=4;i++){
    w=w*(i+1);
     s=s+v/w;
     v=v*x*x;
}

printf("The summation of the series: %d\n",s);
   return 0;
}
