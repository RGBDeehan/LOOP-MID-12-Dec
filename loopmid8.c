// FIND GCD OF TWO NUMBER //

#include <stdio.h>
int main(){
    int x,y,i,m;    

printf("Enter 1st numbers to find GCD: ");
scanf("%d",&x);
printf("Enter 2nd numbers to find GCD: ");
scanf("%d",&y);

    if(x>y){ m=y;}
    else {m=x;}

for(i=2;i<m;i++){
    if(x%i==0 && y%i==0){
        printf("GCD of given numbers: %d\n",i);
    }
}
return 0;
}