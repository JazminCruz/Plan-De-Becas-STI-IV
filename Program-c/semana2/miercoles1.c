#include<stdio.h>

int main() {

int contador;
char palabra[5];

	printf("Ingrese una palabra maximo de 6 letras:");

		for(contador = 0; contador <= 4; contador ++){

			scanf(" %c", palabra[contador]);


		}

	printf("La palabra que fue introducida fue:\n\n");

		for(contador = 0; contador <= 4; contador ++){

			printf(" %c", palabra[contador]);

		}

}
