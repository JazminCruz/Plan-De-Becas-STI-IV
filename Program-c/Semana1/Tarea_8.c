#include<stdio.h>

int main() {     /*Programa para saber cuál es el número más grande entre 4 número con If/else*/

int numero1;
int numero2;
float decimal1;
float decimal2;

printf("Escriba su PRIMER numero, ENTERO:");
scanf("%d", &numero1);
fflush(stdin);

printf("Escriba su SEGUNDO numero, ENTERO:");
scanf("%d", &numero2);
fflush(stdin);

printf("Escriba su TERCER numero, DECIMAL:");
scanf("%f", &decimal1);
fflush(stdin);

printf("Escriba su CUARTO numero, DECIMAL:");
scanf("%f", &decimal2);

  if( numero1 > numero2 && numero1 > decimal1 && numero1 > decimal2){
       printf("El numero %d es el numero mayor\n", numero1); 

   }
   

      else 
		if(numero2 > numero1 && numero2 > decimal1 && numero2 > decimal2){
            	printf("El numero %d es el numero mayor\n", numero2);

      }
         else
              if(decimal1 > numero1 && decimal1 > numero2 && decimal1 > decimal2){
               printf("El numero %f es el numero mayor\n", decimal1);
         }

         else
		if(decimal2 > numero1 && decimal2 > numero2 && decimal2 > decimal1){
		printf("El numero %f es el numero mayor\n", decimal2);
	}
	





}
