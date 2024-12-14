// SUMMATION FOR NORMAL SERIES (+1-3+5-7+9)//

#include <stdio.h>
int main () {
int x,i,s,a,p,y;
printf("Enter 1st number: ");
scanf("%d",&x);

printf("Enter last number: ");
scanf("%d",&y);
s=0;
for(i=x;i<=y;i=i+4){
     s=s+i; 
}
p=0;
for(i=3;i<=y;i=i+4){
     p=p+i; 
}
/* ANOTHER METHOD 
for(i=x;i<=y;i=i+4){
    if (i%4==1){
     s=s+i; }

for(i=3;i<=y;i=i+4){
    if(i%4=3){
     p=p+i;  
     }
      */

 a=s-p;
printf("The summation of the series: %d\n",a);
return 0;
}