#include<stdio.h>

int main() {

char letraabc;

printf("Escriba una letra:");
scanf(" %c", &letraabc);

switch (letraabc){

	case 'a':
	case 'A':
		printf("Su letra %c es una VOCAL\n", letraabc);
		break;

	case 'e':
	case 'E':
		printf("Su letra %c es una VOCAL\n", letraabc);
		break;

	case 'i':
	case 'I':
		printf("Su letra %c es una VOCAL\n", letraabc);
		break;
	
	case 'o':
	case 'O':
		printf("Su letra %c es una VOCAL\n", letraabc);
		break;

	case 'u':
	case 'U':
		printf("Su letra %c es una VOCAL\n", letraabc);
		break;
	
	default:
		printf("Su letra %c es una CONSONANTE\n", letraabc);



	}



}
