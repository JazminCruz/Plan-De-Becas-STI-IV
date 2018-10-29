#include <stdio.h>

int main(){

int num;
int i;
int fact=1;

printf("Escriba un número menor que 13 y mayor que 0:\n");
scanf("%d", &num);

if(num >0 && num <=13){

	for(i=num; i>1; i --){
		
		fact = fact * i;

		}

	printf("El factorial de %d es %d\n", num, fact);

	
       
       }
       
       else printf("ERROR\n");  


}

