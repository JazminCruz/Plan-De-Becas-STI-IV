#include<stdio.h>

int main(){

int a;
int b;
int c;
int d;


printf("Programa para saber si es posible\n hacer un triangulo o no con 4 datos\n\n");

printf("Digite su primer numero:");
scanf("%d", &a);

printf("\nDigite su segundo numero:");
scanf("%d", &b);

printf("\nDigite su tercer numero:");
scanf("%d", &c);

printf("\nDigite su cuarto numero:");
scanf("%d", &d);

	if(0<(a>(b-c))&&0<(a<(b+c))){       
		printf("\nEs POSIBLE hacer su triangulo\n");
		}
	else printf("\nNO es posible hacer su triangulo\n");


	if((b>(a-c))&&(b<(a+c))){
		printf("\nEs POSIBLE hacer su triangulo\n");
		}
	else printf("\nNO es posibles hacer su triangulo\n");
	
	
	if((c>(a-b))&&(c<(a+b))){
		printf("Es POSIBLE hacer el triangulo\n");
		}	
	else printf("\nNO es posible hacer el triangulo\n");

	if((a>(c-b))&&(a<(b+c))){
		printf("\nEs POSIBLE hacer su triangulo\n");
		}
	else printf("\nNO es posible hacer su triangulo\n");









	





}
