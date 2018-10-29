#include <stdio.h>


float segundos();
float minutos();
float horas();
float dias();
float anos();

int main()           //programa para calcular segundos, minutos, horas, dias, añ{
int opc;
float origen;
int eleccion;
float salida;

    
printf("Programa para hacer conversiones de segundos, minutos, horas, dias, añ);
    
    
    do{
         printf("Origen de su conversión Escriba el nú que corresponde\n");
         printf("1. Segundos\n");
         printf("2. Minutos\n");
         printf("3. Horas\n");
         printf("4. Dí\n");
         printf("5. Añn");
         printf("6. Salir\n");
         printf("Opciólegida\n");
         scanf("%d",&opc);
         
         switch(opc){
                     
                     case 1: segundos(); break;
                     case 2:minutos(); break;
                     case 3:horas(); break;
                     case 4:dias(); break;
                     case 5:anos(); break;
            
                     }
         
     
         }while(opc != 6);

  
  return 0;
}
  
     
     


//int segundos(int opc == 1){

float segundos(){

	
     float origen;
     int eleccion;
     float salida=0;
     
     
     printf("\nEscriba la cantidad de segundos que tiene:");
     scanf("%f", &origen);
     
     printf("\nEscriba a quéo quiere convertir:");
     printf("1. Segundos\n");
     printf("2. Minutos\n");
     printf("3. Horas\n");
     printf("4. Dí\n");
     printf("5. Añn");
     printf("Digite la opcion elegida:");
     scanf("%d", &eleccion);
     
     switch(eleccion){
                      
                      case 1: salida = 1 * origen;
                                
                                printf("\nEl numero de segundos es %f", salida);
                                break;
                      
                      case 2 : salida= origen / 60;
                               printf("\nEl numero de minutos es %f", salida);
                               
                      case 3 : salida = origen / 3600; 
                               printf("\nEl numero de horas es %f", salida);
                               break;
                      case 4 : salida = origen / 86400;
                               printf("\nEl numero de dias es %f", salida);
                               break;
                      case 5 : salida = origen / 31536000;
                               printf("El numero de añes %f", salida);
                               break;
                               
                            
                               
                      }        

     }

float minutos(){
	float origen;
     int eleccion;
     float salida=0;
     
     
     printf("\nEscriba la cantidad de minutos que tiene:");
     scanf("%f", &origen);
     
     printf("\nEscriba a quéo quiere convertir:");
     printf("1. Segundos\n");
     printf("2. Minutos\n");
     printf("3. Horas\n");
     printf("4. Dí\n");
     printf("5. Añn");
     printf("Digite la opcion elegida:");
     scanf("%d", &eleccion);
     
     switch(eleccion){
                      
                      case 1: salida = 60 * origen;
                                
                                printf("\nEl numero de segundos es %f", salida);
                                break;
                      
                      case 2 : salida= origen * 1;
                               printf("\nEl numero de minutos es %f", salida);
                               
                      case 3 : salida = origen / 60; 
                               printf("\nEl numero de horas es %f", salida);
                               break;
                      case 4 : salida = origen / 1440 ;
                               printf("\nEl numero de dias es %f", salida);
                               break;
                      case 5 : salida = origen / 525600;
                               printf("El numero de añes %f", salida);
                               break;
                               
                    
                               
                            
                               
                      }        

     }
     
float horas(){
  float origen;
     int eleccion;
     float salida=0;
     
     printf("\nEscriba la cantidad de horas que tiene:");
     scanf("%f", &origen);
     
     printf("\nEscriba a quéo quiere convertir:");
     printf("1. Segundos\n");
     printf("2. Minutos\n");
     printf("3. Horas\n");
     printf("4. Dí\n");
     printf("5. Añn");
     printf("Digite la opcion elegida:");
     scanf("%d", &eleccion);
     
     switch(eleccion){
                      
                      case 1: salida = 3600 * origen;
                                
                                printf("\nEl numero de segundos es %f", salida);
                                break;
                      
                      case 2 : salida= origen * 60;
                               printf("\nEl numero de minutos es %f", salida);
                               
                      case 3 : salida = origen * 1; 
                               printf("\nEl numero de horas es %f", salida);
                               break;
                      case 4 : salida = origen / 24;
                               printf("\nEl numero de dias es %f", salida);
                               break;
                      case 5 : salida = origen / 8760;
                               printf("El numero de añes %f", salida);
                               break;
                     default: printf("Opcion INVALIDA"); break;
                               
                               
                               
                      }        

     }
     
     
     
float dias(){
	float origen;
     int eleccion;
     float salida=0;     
     
     
     printf("\nEscriba la cantidad de dí que tiene:");
     scanf("%f", &origen);
     
     printf("\nEscriba a quéo quiere convertir:");
     printf("1. Segundos\n");
     printf("2. Minutos\n");
     printf("3. Horas\n");
     printf("4. Dí\n");
     printf("5. Añn");
     printf("Digite la opcion elegida:");
     scanf("%d", &eleccion);
     
     switch(eleccion){
                      
                      case 1: salida = 86400 * origen;
                                
                                printf("\nEl numero de segundos es %f", salida);
                                break;
                      
                      case 2 : salida= origen * 1440;
                               printf("\nEl numero de minutos es %f", salida);
                               
                      case 3 : salida = origen * 24; 
                               printf("\nEl numero de horas es %f", salida);
                               break;
                      case 4 : salida = origen * 1;
                               printf("\nEl numero de dias es %f", salida);
                               break;
                      case 5 : salida = origen / 365;
                               printf("El numero de añes %f", salida);
                               break;
                       
                               
                      }        

     }

float anos(){
	float origen;
     int eleccion;
     float salida=0;
     
     printf("\nEscriba la cantidad de añque tiene:");
     scanf("%f", &origen);
     
     printf("\nEscriba a quéo quiere convertir:");
     printf("1. Segundos\n");
     printf("2. Minutos\n");
     printf("3. Horas\n");
     printf("4. Dí\n");
     printf("5. Añn");
     printf("Digite la opcion elegida:");
     scanf("%d", &eleccion);
     
     switch(eleccion){
                      
                      case 1: salida = 31536000 * origen;
                                
                                printf("\nEl numero de segundos es %f", salida);
                                break;
                      
                      case 2 : salida= origen / 525600;
                               printf("\nEl numero de minutos es %f", salida);
                               
                      case 3 : salida = origen / 8760; 
                               printf("\nEl numero de horas es %f", salida);
                               break;
                      case 4 : salida = origen * 365;
                               printf("\nEl numero de dias es %f", salida);
                               break;
                      case 5 : salida = origen *1;
                               printf("El numero de añes %f", salida);
                               break;
                      
                               
                      }        

     }

