#include<stdio.h>

int main() {   //Programa que te pide dos numeros y te dice si son iguales

int numero1;
int numero2;

printf("Escriba su primer numero ENTERO:");
scanf("%d", &numero1);

printf("Escriba su segundo numero ENTERO:");
scanf("%d", &numero2);

if( numero1 == numero2){
	
	printf("Sus numeros son iguales\n");
	return 0;
	}
	
	printf("Sus numeros son diferentes\n");




}
