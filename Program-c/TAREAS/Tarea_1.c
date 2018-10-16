#include<stdio.h>

int main() {    //comentario corto, muy corto
int numero1;
int numero2;
int resultado;

printf("Ingrese su primer valor:");
scanf("%d", &numero1);

printf("Ingrese su segundo valor:");   /*comentario largo, muy, muy muy, muuy largo*/
scanf("%d", &numero2);

printf("Su primer numero es: %d\n", numero1);
printf("Su segundo numero es: %d\n", numero2);


resultado = numero1 + numero2;
printf("El resultado de la suma es: %d\n", resultado);

resultado = numero1 - numero2;
printf("El resultado de la resta es: %d\n", resultado);

resultado = numero1 * numero2;
printf("El resultado de su multiplicacion es: %d\n", resultado);

resultado = numero1 / numero2;
printf("El resultado de su division es: %d\n", resultado);

resultado = numero1 % numero2;
printf("El residuo de su division es: %d\n", resultado);






}
