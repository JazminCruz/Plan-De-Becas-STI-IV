#include<stdio.h>

int main(){

int num1;
int num2;
int i;
int suma;

printf("*Programa para hacer una numeracion entre\n 2 numeros\ny dar la suma de dicha numeracion*\n");
printf("Por favor introducir su numero menor ENTERO:");
scanf("%d", &num1);

printf("Por favor introducir su numero mayor ENTERO:");
scanf("%d", &num2);

	for(i= num1; i <= num2; i++){
		printf("%d\n", 	i);
	
	
		suma = suma + i;

		}

	printf("La suma es %d\n", suma);



}
