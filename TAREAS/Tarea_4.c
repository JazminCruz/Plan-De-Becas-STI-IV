#include<stdio.h>

int main() {
int numero1;
int numero2;

printf("Ingrese su primer numero:");
scanf("%d", &numero1);

printf("Ingrese su segundo numero:");
scanf("%d", &numero2);


if (numero1 > numero2){
      printf("El primer numero es mayor que el segundo\n");
}

if (numero1 < numero2){
      printf("El primer numero es menor que el segundo\n");

}

}
