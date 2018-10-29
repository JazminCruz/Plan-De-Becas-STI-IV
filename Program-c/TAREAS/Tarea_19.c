#include<stdio.h>

int main(){

int num;
int i;
int a=0;
int b=1;
int c;

printf("Programa para hacer la\n secuencia de fibonacci");

printf("Escriba un numero ENTERO menor a 46:");
scanf("%d", &num);

for(i=1; i<=num; i ++){
	
	c =  a + b;

	printf("%d\n", c);

	a =b;
	b= c;
	

	}

}
