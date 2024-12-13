// CHECK IF IT'S A PERFECT NUMBER (SUMMATION OF DIVISOR/FACTOR)(6=1+2+3) //

#include <stdio.h>
int main() {
int x,s,i;

printf("Enter the number: ");
scanf("%d",&x);
s=0;
for(i=1;i<x;i++){
    if(x%i==0){
        s=s+i;
    }
}
if(s==x){
    printf("The number is a perfect number");
}
else{
    printf("The number is NOT a perfect number");}


    return 0;
}