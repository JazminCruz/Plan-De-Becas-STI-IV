#include<stdio.h>

int main() {   //programa que te imprime desde 0 hasta el numero que                               ingresa el usuario
			
int numero;
int contador;
	
		//lo hacemos con DO-WHILE

printf("*****************************\n");
printf("* Programa que te imprime los \n numeros anteriores dados\n por el usuario\n");
printf("*****************************\n");


printf("\t\t Esta secuencia se va a realizar con Do-While\n\n");

printf("'\t Ingrese un numero al que vamos a llegar:");
scanf("%d", &numero);


contador = 1;

	do{
		printf("%d\n", contador);
		contador = contador + 1;


	}

		while (contador <= numero);





		//lo hacemos con FOR


printf("\t\t Esta secuencia la vamos a realizar con FOR\n\n");

printf("\t Ingrese un numero al que vamos a llegar:");
scanf("%d", &numero);


	for( contador=1; contador<= numero; contador = contador + 1) {

		printf("%d\n", contador);


	}



		//Lo hacemos con WHILE

printf("\t\t Esta secuencia la vamos a realizar con WHILE\n\n");

printf("'\t Ingrese un numero al que vamos a llegar:");
scanf("%d", &numero);


contador = 1;

	while (contador <= numero){

		printf("%d\n", contador);
		contador = contador +1;

	}

}
