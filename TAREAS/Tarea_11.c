#include<stdio.h>
#include<math.h>

int main() {

float a;
float b;
float c;
float x1;
float x2;
float raiz;

printf("Escriba el valor de su variable 'a':");
scanf("%f", &a);

printf("Escriba el valor de su variable 'b':");
scanf("%f", &b);

printf("Escriba el valor de su variable 'c':");
scanf("%f", &c);

raiz = sqrt (b*b -(4*a*c)); 

x1 = (-b + raiz)/2*a;
x2 = (-b - raiz)/2*a;
	
printf("El valor de 'x1' es %f\n", x1);
printf("El valor de 'x2' es %f\n", x2);

 

}

