// FIND LCM OF TWO NUMBERS //

#include <stdio.h>
int main() {
int x,y,i,a;

printf("Enter 1st numbers to find LCM: ");
scanf("%d",&x);
printf("Enter 2nd numbers to find LCM: ");
scanf("%d",&y);

for (i=1;i<x*y;i++){
    if(i%x==0 && i%y==0){
        a=i;
     break;    }
}
printf("LCM of given numbers: %d\n",a);
    return 0;
}