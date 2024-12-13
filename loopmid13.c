// INPUT A DECIMAL & CONVERT INTO BINARY //

#include <stdio.h> 
int main(){
int x,p;

printf("Enter the number: ");
scanf("%d",&x);
printf("The BINARY NUMBER: ");

while(x!=0){
    p=x%2;
    x=x/2;
printf("%d",p);
}

return 0;
}