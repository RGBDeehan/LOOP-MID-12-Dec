// FIND FACTORIAL  //

#include <stdio.h>
int main(){
int x,i,s;

printf("Enter the number: ");
scanf("%d",&x);
s=1;

for(i=1;i<=x;i++){
    s=s*i;
}

printf("The factorial of that mumber is: %d\n", s);
    return 0;
}