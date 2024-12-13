// BIGGEST FACTOR & LOWEST FACTOR //

#include <stdio.h>
int main(){
int x,i;

printf("Enter the number: ");
scanf("%d",&x);

for (i=2;i<x;i++){
    if(x%i==0){
    break;
    
    }
}
printf("THE BIGGEST FACTOR: %d\n",x);
printf("THE LOWEST FACTOR: %d\n",i);

if(x==i){
        printf("THE NUMBER IS PRIME");
    }

    return 0;
}