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



// SUM,AVERAGE OF DIGIT //

#include <stdio.h> 
int main (){
int x,p,c,s,a;

printf("Enter the number: ");
scanf("%d",&x);
printf("The Digits are: ");
s=0;
while (x!=0){
    p=x%10;
    x=x/10;
    c++;
    s=s+p;
printf("%d   ",p);
} a=s/c;
printf("The sum of digit: %d\n",s);
printf("The number of digit: %d\n",c);
printf("The average of digit: %d\n",a);
 return 0;
}
