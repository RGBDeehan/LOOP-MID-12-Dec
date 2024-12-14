// SUMMATION FOR NORMAL SERIES (1+2+3+4......+n)//

#include <stdio.h>
int main () {
int x,i,s,y;
printf("Enter 1st number: ");
scanf("%d",&x);

printf("Enter last number: ");
scanf("%d",&y);
s=0;
for(i=x;i<=y;i++){
    s=s+i;
}
printf("The summation of the series: %d\n",s);
return 0;
}

// SUMMATION FOR NORMAL SERIES (1+3+5+7......+n)//

#include <stdio.h>
int main () {
int x,i,s,y;
printf("Enter 1st number: ");
scanf("%d",&x);

printf("Enter last number: ");
scanf("%d",&y);
s=0;
for(i=x;i<=y;i=i+2){
    s=s+i;
}
/* ANOTHER METHOD 
for(i=x;i<=y;i=i+1){
    if (i%2==1){
     s=s+i; } */

/* Another method
   v=1;
   for(i=1;i<=y;i++){
   s=s+v;
   v=v+2;
   }  

     
     */
printf("The summation of the series: %d\n",s);
return 0;
}