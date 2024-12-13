// BIGGEST FACTOR & LOWEST FACTOR //

#include <stdio.h>
int main(){
int x,i,a,j;

printf("Enter the number: ");
scanf("%d",&x);

for (i=2;i<x;i++){
    if(x%i==0){
    break;
    
    }
}
a=0;
for(j=1;j<x;j++){
    if(x%j==0){
        a=j;
    }
}

printf("THE BIGGEST FACTOR: %d\n",a);
printf("THE LOWEST FACTOR: %d\n",i);

if(x==i){
        printf("THE NUMBER IS PRIME");
    }

    return 0;
}