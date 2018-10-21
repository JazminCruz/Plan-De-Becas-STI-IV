#include<stdio.h>

int main() {          /*Programa para saber si es una consonante o vocal                                    con "if/else"*/
char letraabc;


printf("Introducir una letra:");
scanf(" %c", &letraabc);



if ( letraabc == 'a' || letraabc == 'A'){
    printf("Su letra es una vocal\n");
   }
    
else 
    if ( letraabc == 'e' || letraabc == 'E'){
        printf ( "Su letra es una vocal\n");
    }

else 
    if ( letraabc == 'i' || letraabc == 'I'){
     printf("Su letra es una vocal\n");
    } 

else
    if (letraabc == 'o' || letraabc == 'O'){
      printf("Su letra es una vocal\n");
    }
else
    if (letraabc == 'u' || letraabc == 'U'){
      printf("Su letra es un volcal\n");
    }

else
   printf("Su letra %c es una CONSONANTE \n", letraabc);





}
