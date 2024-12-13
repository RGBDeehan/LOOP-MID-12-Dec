// AVERAGE FACTOR VALUE //

#include <stdio.h>
int main() {
int x,i;
float a,s,c;

printf("Enter the number: ");
scanf("%d",&x);

c=0; s=0;
for(i=1;i<=x;i++){
    if(x%i==0){
        c++;
        s=s+i;
    }
}

a=s/c;

printf("AVERAGE FACTOR: %.2f\n",a);
    return 0;
}