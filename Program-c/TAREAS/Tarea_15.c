#include<stdio.h>

int main(){

float a, b, c, area;

printf("Programa para calcular areas de un triagulo rectangulo, cuadrado y rectangulo\n\n");


printf("Dame el valor de A:");
scanf("%f", &a);

printf("\nDame el valor de B:");
scanf("%f", &b);

printf("\nDame el valor de C:");
scanf("%f", &c);


area = (a * c) / 2;

printf("El area del triangulo rectangulo es %f\n", area);

area = b * b;

printf("El area del cuadrado es %f\n", area);

area = a * b;

printf("El area del rectangulo es %f\n", area);




}
