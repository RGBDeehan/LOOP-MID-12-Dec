// CONSECUTIVE NUMBERS AVAILABLE AS FACTOR (EX. 20=2*4*5 || 4,5 Consecutive)//

#include <stdio.h> 
int main(){
int x,i,a,b;

printf("Enter the number: ");
scanf("%d",&x);

a=0;
for(i=2;i<x;i++){
    if(x%i==0){
    a=i;
    b=a+1;

    if(a==0){printf("There is no factor");}
   else if(x%b==0){
        printf("CONSECUTIVE are: %d\n %d\n",a,b);
    }
   
         }
}

    return 0;
}