#include<stdio.h>

int main() {

int contador;
int numeros[5];

	printf("Ingrese 6 numeros:\n");


		for(contador = 0; contador <= 5; contador ++){

			printf("Ingrese el entero # %d : \t", contador +1);
			scanf("%d", &numeros[contador]);

			

		}

	printf("Los numeros introducidos fueron:");

		for(contador = 0; contador <= 5; contador ++){

			printf("El numero "%d" era %d", contador +1,  numeros[contador]);

		}

}
