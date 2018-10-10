#include<stdio.h>


int main(){     //comentaio corto, es reapido
int numero;
int numero2;
int resultado; 


printf("Ingrese un primer  valor:");
scanf("%d", &numero);    /*quiero que sea un comentario largo, largo*/

printf("Ingrese un segundo valor:");
scanf("%d", &numero2);

printf("El valor de su primer numero es : %d\n", numero);
printf("El valor de su segundo numero es: %d\n", numero2);

resultado = numero + numero2;
printf("La suma de los numeros es : %d\n", resultado);

resultado = numero - numero2;
printf("la resta de los numeros es: %d\n", resultado);

resultado = numero * numero2;
printf("la multiplicacion de los numeros es: %d\n", resultado);



if (numero > numero2){

       printf("El primer numero es mayor que el segundo\n");
       printf("\n\n");
}



}


