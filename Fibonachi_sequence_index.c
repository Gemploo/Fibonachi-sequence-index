#include <stdio.h>
#include <math.h>
#define co sqrt(5)

int main(){
unsigned x;
int i;
double u=(1+co)/2, y = (1-co)/2;
printf("Enter term of fibbonachi sequence: ");
scanf("%u", &x);
i=(pow(u,x)-pow(y,x))/co;	
printf("The value of term %u is %u \n",x,i);
return 0;
}

