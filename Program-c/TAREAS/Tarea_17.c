#include<stdio.h>

int main(){  //Programa para leer un numeor y decir a que rango pertenece

float usuario;


printf("*Programa para saber en que rango se encuentra un numero decimal*\n");
printf("Introduzca su numero decimal:");
scanf("%f", &usuario);

if(usuario<0 && usuario>100){
	printf("Su numero esta fuera de intervalo");
	}

if(usuario >= 0 && usuario <=20){
	printf("Tu numero esta en un rango del 0 al 20\n");
	}

if(usuario >= 20 && usuario<=40){
	printf("Tu numero esta en un rango del 20 al 40\n");
	}
if(usuario >= 40 && usuario <= 60){
	printf("Tu numero se encuentra en un rango del 40 al 60\n");
	}
if(usuario >= 60 && usuario <=80){
	printf("Tu numero se encuentra en un rango del 60 al 80\n");
	}
if(usuario >= 80 && usuario <= 100){
	printf("Tu numero se encuentra en un rango del 80 al 100\n");
	}
}
