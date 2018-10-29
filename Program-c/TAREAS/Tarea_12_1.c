#include <stdio.h>



int main()          //Programa para convertir de segundos, minutos, horas, dias y años
{
float cantidad;
float salida;
int origen;
int devuelta;



printf("Escriba el origen de su conversion:\n");
printf("1. segundos\n2. minutos\n3. horas\n4. dias\n5. anios\t\n");
scanf("%d", &origen);



printf("\nEscriba la cantidad a convertir:");
scanf("%f", &cantidad);

printf("\nEscriba a qué lo desea convertir:");
printf("\n1. segundos\n2. minutos\n3. horas\n4. dias\n5. anios\n");
scanf("%d", &devuelta);

switch(origen){
               
case 1: 
                    if(devuelta = 1){
                                salida = cantidad * 1;
                                printf("La cantidad de segundos es %f\n", salida);
                                
                                } return 0;
               
                   if(devuelta = 2){
                               salida = cantidad / 60;
                               printf("La cantidad de minutos es %f\n", salida);
                               } return 0;
                               salida = cantidad / 3600;
                               printf("La cantidad de horas es %f\n", salida);
                               } return 0;
                   if(devuelta = 4){
                               salida = cantidad / 86400;
                               printf("La cantidad de dias es %f\n", salida);
                               } return 0;
                   if(devuelta = 5){
                               salida = cantidad / 31536000;
                               printf("La cantidad de años es %f\n", salida); 
                               } return 0;

		break;
               
               
case 2: 
                    if(devuelta == '1'){
                                salida = cantidad * 60;
                                printf("La cantidad de segundos es %d\n", salida);
                                
                                }return 0;
                   if(devuelta == '2'){
                               salida = cantidad *1;
                               printf("La cantidad de minutos es %d\n", salida);
                               } return 0;
                   if(devuelta == '3'){
                               salida = cantidad / 60;
                               printf("La cantidad de horas es %d\n", salida);
                               } return 0;
                   if(devuelta == '4'){
                               salida = cantidad / 1440;
                               printf("La cantidad de dias es %d\n", salida);
                               } return 0;
                   if(devuelta == '5'){
                               salida = cantidad / 525600;
                               printf("La cantidad de años es %d\n", salida); 
                               } return 0;
               
		break;
case 3: 
                    if(devuelta == '1'){
                                salida = cantidad * 3600;
                                printf("La cantidad de segundos es %d\n", salida);
                                
                                } return 0;
                   if(devuelta == '2'){
                               salida = cantidad * 60;
                               printf("La cantidad de minutos es %d\n", salida);
                               } return 0;
                   if(devuelta == '3'){
                               salida = cantidad * 1;
                               printf("La cantidad de horas es %d\n", salida);
                               } return 0;
                   if(devuelta == '4'){
                               salida = cantidad / 24;
                               printf("La cantidad de dias es %d\n", salida);
                               } return 0;
                   if(devuelta == '5'){
                               salida = cantidad / 8760;
                               printf("La cantidad de años es %d\n", salida); 
                               } return 0;
               
		break;
case 4: 
                    if(devuelta == '1'){
                                salida = cantidad * 86400;
                                printf("La cantidad de segundos es %d\n", salida);
                                
                                } return 0;
                   if(devuelta == '2'){
                               salida = cantidad * 1440;
                               printf("La cantidad de minutos es %d\n", salida);
                               } return 0;
                   if(devuelta == '3'){
                               salida = cantidad *24;
                               printf("La cantidad de horas es %d\n", salida);
                               } return 0;
                   if(devuelta == '4'){
                               salida = cantidad * 1;
                               printf("La cantidad de dias es %d\n", salida);
                               } return 0;
                   if(devuelta == '5'){
                               salida = cantidad *365;
                               printf("La cantidad de años es %d\n", salida); 
                               } return 0;
               
		break;
case 5: 
                    if(devuelta == '1'){
                                salida = cantidad * 31536000;
                                printf("La cantidad de segundos es %d\n", salida);
                                
                                } return 0;
                   if(devuelta == '2'){
                               salida = cantidad * 525600;
                               printf("La cantidad de minutos es %d\n", salida);
                               } return 0;
                   if(devuelta == '3'){
                               salida = cantidad / 8760;
                               printf("La cantidad de horas es %d\n", salida);
                               } return 0;
                   if(devuelta == '4'){
                               salida = cantidad / 365;
                               printf("La cantidad de dias es %d\n", salida);
                               } return 0;
                   if(devuelta == '5'){
                               salida = cantidad *1;
                               printf("La cantidad de años es %d\n", salida); 
                               } return 0;
		break;               

               }

} 
