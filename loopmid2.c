// ODD FACTORS EVEN FACTORS //

#include <stdio.h> 
int main(){
int x,i,c,d;

printf("Enter the number: ");
scanf("%d",&x);

c=0;d=0;

for(i=2;i<x;i++){
    
    if(x%i==0){
    if(i%2==0){
        printf("The EVEN factors are: %d\n",i); c++;}
        
    else{ 
        printf("The ODD factors are: %d\n",i);   d++;}
       
       }
}
printf("THERE ARE %d EVEN FACTORS\n", c);
printf("THERE ARE %d ODDD FACTORS\n", d);
    return 0;
}