#include<stdio.h>

int main(){

int opc1;
int opc2;

printf("*Programa para jugar piedra, papel o tijeras\n");

printf("\nEscriba la opcion que desea:");
printf("\n1.Piedra\n");
printf("2, Papel\n");
printf("3. Tijeras\n");
printf("Jugador1:");
scanf("%d", &opc1);

printf("\nJugador2:");
scanf("%d", &opc2);


	if(opc1 == 1 && opc2 == 1){
		printf("Empate\n");
		}

	if(opc1 == 1 && opc2 == 2){
		printf("Jugador 2 gana\n");
		}	

	if(opc1 == 1 && opc2 == 3){
		printf("Jugador 1 gana\n");
		}

	if(opc1 == 2 && opc2 == 1){
                printf("Jugador 1 gana\n");
                }

        if(opc1 == 2 && opc2 == 2){
                printf("Empate\n");
                }

        if(opc1 == 2 && opc2 == 3){
                printf("Jugador 2 gana\n");
                }

	if(opc1 == 3 && opc2 == 1){
                printf("JUgador 2 gana\n");
                }

        if(opc1 == 3 && opc2 == 2){
                printf("Jugador 1 gana\n");
                }

        if(opc1 == 3 && opc2 == 3){
                printf("Empate\n");
                }	

}
