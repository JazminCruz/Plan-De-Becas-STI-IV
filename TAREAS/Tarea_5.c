#include<stdio.h>

int main() {

int numeroentero;
char letra;
float decimal;

printf("Introducir su numero entero:");
scanf("%d", &numeroentero);

printf("Introducir su letra : ");
scanf(" %c", &letra);


printf("Introducir un numero con punto decimal : ");
scanf("%f", &decimal);


printf("El valor de su numero entero es: %d\n", numeroentero);
printf("El valor de su letra es:  %d\n", letra);
printf("El valor de su numero con punto decimal es: %f\n", decimal);


}
