#include <stdio.h>
int main(){
float x,i,s,v,w;

printf("Enter the value of x (e^x): ");
scanf("%f",&x);
v=1;s=0;w=1;
for(i=2;i<=10;i++){
    if(v/w<0001){ break; }
    s=s+(v/w);
    v=v*x*x;
    w=w*(i+1);
}
printf("The summation of the series (value of (e^x)): %.2f\n",s);
    return 0;
}

#include <stdio.h>
int main(){
int x,i,s,v,w,a;

printf("Enter the value of x (e^x): ");
scanf("%d",&x);

v=x;
s=0;
w=1;
a=0;
for(i=1;i<=5;i++){
 //   if(v/w<0001){ break; } //
    s=s+(v/w);
    v=v*x;
    w=w*i;
}
a=1+s;
printf("The summation of the series (value of (e^x)): %d\n",a);
    return 0;
}
