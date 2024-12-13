// FIND IF THE NUMBER IS ARMSTRONG NUMBER  //
// Armstrong number is a number that is equal to the SUM of CUBES of its DIGITS. For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.//

#include <stdio.h>
int main(){
int x,p,s,y;

printf("Enter the number: ");
scanf("%d",&x);

s=0;y=x;
while(x!=0){
    p=x%10;
    x=x/10;
    s=s+(p*p*p);
}
if(s==y){
    printf("This is a ARMSTRONG number");
}
else{printf("This is not an ARMSTRONG number");}
    return 0;
}