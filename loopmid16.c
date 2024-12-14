// SUMMATION FOR NORMAL SERIES (1+3+5+7......+n) //

#include <stdio.h>
int main () {
int x,i,s,v,y;
printf("Enter 1st number: ");
scanf("%d",&x);

printf("Enter last number: ");
scanf("%d",&y);
s=0;

/* ANOTHER METHOD 
for(i=x;i<=y;i=i+1){
    if (i%2==1){
     s=s+i; } */


   v=0;s=0;
   for(i=0;i<=y;i++){
   s=s+v;
   v=v+2;
   }  

     
    
printf("The summation of the series: %d\n",v);
return 0;
}