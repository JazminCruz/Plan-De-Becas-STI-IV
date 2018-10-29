#include<stdio.h>

int main(){

float edad;
float prom=0;
int i=1;

	

	while (edad > 0){

		printf("Escribe una edad:");
		scanf("%f", &edad);

		if(edad >0){

		prom = prom + edad;
		i++;	

		}

		}

		

	printf("\nEl promedio de las edades es %f", prom/(i-1));
 

}
