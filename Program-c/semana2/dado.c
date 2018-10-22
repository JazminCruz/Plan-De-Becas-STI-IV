#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int main(){


int arreglo[4];
int i;        //este i es mi contador

srand(time(NULL));


	for(i = 0; i <=5; i++){
		
		arreglo[i] = (rand(1 +rand()) % 8+1 -1); 


		}

	for(i = 0; i <= 5; i++){
	
		printf("su #%d aleatorio es %d\n", i +1, arreglo[i]);

		}






}
