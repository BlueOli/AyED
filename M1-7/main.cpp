#include <iostream>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int lado1 = 0;
	int lado2 = 0;
	int lado3 = 0;
	printf("Ingrese el lado 1: ");
	scanf("%i", &lado1);
	printf("Ingrese el lado 2: ");
	scanf("%i", &lado2);
	printf("Ingrese el lado 3: ");
	scanf("%i", &lado3);
	if(lado1+lado2 > lado3){
		if(lado2+lado3 > lado1){
			if(lado3+lado1 > lado2){
				printf("Forman un triangulo");
			}else{
				printf("No forman triangulo");
			}
		}else{
			printf("No forman triangulo");
		}
	}else{
		printf("No forman triangulo");
	}	
	return 0;
}
