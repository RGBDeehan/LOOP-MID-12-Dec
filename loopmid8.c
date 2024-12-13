// FIND GCD OF TWO NUMBER //

#include <stdio.h>
int main(){
    int x,y,i,m,a;    

printf("Enter 1st numbers to find GCD: ");
scanf("%d",&x);
printf("Enter 2nd numbers to find GCD: ");
scanf("%d",&y);

    if(x>y){ m=y;}
    else {m=x;}

for(i=2;i<=m;i++){
    if(x%i==0 && y%i==0){
      a=i; 
    }
}
 printf("GCD of given numbers: %d\n",a);
return 0;
}
