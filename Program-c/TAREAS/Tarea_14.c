#include<stdio.h>

int main(){

int opc;

printf("Programa para saber el elemento de tu signo\n");

printf("Por favor indicar el numero de su signo zodiacal:\n");

printf("\n1. Aries\n 2. Tauro\n 3. Geminis\n 4. Cancer\n 5. Leo\n 6. Virgo\n 7.Libra\n 8.Escorpio\n 9. Sagitario\n 10. Capricornio\n 11.Acuario\n 12.Piscis\n\t:");
scanf("%d", &opc);

switch(opc){

	case 1:
		printf("Eres FUEGO\n");
		break;

	case 2:
		printf("Eres TIERRA\n");
		break;

	case 3:
		printf("Eres AIRE\n");
		break;
	case 4:
		printf("Eres AGUA\n");
		break;
	case 5:
		printf("Eres FUEGO\n");
		break;
	case 6:
		printf("Eres TIERRA\n");
		break;
	case 7:
		printf("Eres AIRE\n");
		break;
	case 8:
		printf("Eres AGUA\n");
		break;
	case 9:
		printf("Eres FUEGO\n");
		break;
	case 10:
		printf("Eres TIERRA\n");
		break;
	case 11:
		printf("Eres AIRE\n");
		break;
	case 12:
		printf("Eres AGUA\n");
		break;



	}

}
