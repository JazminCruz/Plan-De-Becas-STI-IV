#include<stdio.h>

int main() {      //Programa para calcular las tablas de multiplicar

int i1;
int i2;


	for( i1 = 1; i1 <= 10; i1 ++){

		printf("La tabla de %d es:\n", i1);

			for(i2 = 1; i2 <= 10; i2++){
				printf("%d * %d es %d\n", i1, i2, i1*i2);
	
			}

		}


}
