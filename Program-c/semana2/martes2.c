#include<stdio.h>

int main() {   //programa que te imprime desde 0 hasta el numero que ingresa el usuario

int numero;          //Programa hecho con FOR
int contador;

printf("*****************************\n");
printf("* Programa que te imprime los \n numeros anteriores dados\n por el usuario\n");
printf("*****************************\n");




printf("'\t Ingrese un numero al que vamos a llegar:");
scanf("%d", &numero);


	for( contador=1; contador<= numero; contador = contador + 1) {

		printf("%d\n", contador);


	}



}
