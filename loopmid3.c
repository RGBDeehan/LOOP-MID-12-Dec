// SUMMATION OF FACTORS //
#include <stdio.h>
int main(){
int x,i,s;

printf("Enter the number: ");
scanf("%d",&x);
s=0;
for (i=1;i<=x;i++){
    if(x%i==0){
        s=s+i;
    }
}
printf("THE SUM OF FACTORS: %d\n",s);
    return 0;
}