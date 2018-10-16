#include<stdio.h>
#include<math.h>

int main() {

float a;
float b;
float c;
float x1;
float x2;
/* recuerda que una variable no puede tener el nombre
de una palabra reservada como sqrt que esta reservado
para la funcion de raiz

float sqrt;
*/

float raiz;  


printf("Escriba el valor de su variable 'a':");
scanf("%f", &a);

printf("Escriba el valor de su variable 'b':");
scanf("%f", &b);

printf("Escriba el valor de su variable 'c':");
scanf("%f", &c);

/* la funcion sqrt(); calcula la raiz cuadrada 
para usar la funcion, entre sus parentesis se coloca
el valor del cual se quiere hacer el calculo
*/

raiz  = sqrt(b*b -(4*a*c)); /*guardar en raiz el calculo de la raiz cuadrada*/

x1 = (-b + raiz)/(2*a);
x2 = (-b - raiz)/(2*a);

printf("El valor de 'x1' es %f\n", x1);
printf("El valor de 'x2' es %f\n", x2);

 

}

