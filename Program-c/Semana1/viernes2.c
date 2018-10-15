#include<stdio.h>

int main(){        //Programa para hacer una calculador con SWITCH

float decimal1;
float decimal2;
char operacion;
float resultado;

printf("Introducir su primer numero:");
scanf("%f", &decimal1);

printf("Introducir su segundo numero:");
scanf("%f", &decimal2);

printf("Introducir la operacion a realizar(suma, resta, multiplicaion, division):");
scanf(" %c", &operacion);


switch(operacion){

	case '+': resultado = decimal1 + decimal2; 
		printf("Su resultado es %f\n", resultado);
		break;

	case '-': resultado = decimal1 - decimal2;
		printf("Su resultado es %f\n", resultado);
		break;

	case '*': resultado = decimal1 * decimal2;
		printf("Su resultado es %f\n", resultado);
		break;

	case '/': resultado = decimal1 / decimal2;
		printf("Su resultado es %f'n", resultado);
		break;		
	}

}
