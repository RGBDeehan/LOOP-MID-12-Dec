// DIGIT SEPERATION USING WHILE LOOP //

#include <stdio.h>
int main( ) {
int x,p;

printf("Enter the number: ");
scanf("%d",&x);
printf("The Digits are: ");

while (x!=0){
    p=x%10;
    x=x/10;
printf("%d   ",p);
}
return 0;
}


// DIGIT SEPERATION USING FOR LOOP //

#include <stdio.h>
int main( ) {
int x,i,p;

printf("Enter the number: ");
scanf("%d",&x);
printf("The Digits are: ");

for(i=1;x!=0;i++){
    p=x%10;
    x=x/10;
printf("%d   ",p);
}
return 0;
}
