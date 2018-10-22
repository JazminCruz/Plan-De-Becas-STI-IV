#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int main(){


int arreglo[4];
int i;        //este i es mi contador

srand(time(NULL));


	for(i = 0; i <=5; i++){
		
		arreglo[i] = rand(); 


		}

	for(i = 0; i <= 5; i++){
	
		printf("su #%d aleatorio es %d\n", i +1, arreglo[i]);

		}






}
