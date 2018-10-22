#include<stdio.h>

int main() {   //programa que te imprime desde 0 hasta el numero que ingresa el usuario

int numero;
int contador;

printf("*****************************\n");
printf("* Programa que te imprime los \n numeros anteriores dados\n por el usuario\n");
printf("*****************************\n");




printf("'\t Ingrese un numero al que vamos a llegar:");
scanf("%d", &numero);


contador = 1;

	do{
		printf("%d\n", contador);
		contador = contador + 1;


	}

		while (contador <= numero);

}
