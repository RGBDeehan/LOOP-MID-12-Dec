// SHOW IF THE NUMBER IS PRIME //

#include <stdio.h>
int main (){
int x,i,c;

printf("Enter the number: ");
scanf("%d",&x);

c=0;
for(i=2;i<x;i++){
    if(x%i==0){
        c++;
    }
}
if(c==0){
    printf("The number is prime");
}
else {printf("The number is not prime");}

printf("The value of c is: %d\n", c);
    return 0;
}