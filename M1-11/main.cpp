#include <iostream>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int edad;
	printf("Ingrese la edad: ");
	scanf("%i", &edad);
	if(edad < 13){
		printf("Menor");
	}else if(edad > 12 && edad < 19){
		printf("Cadete");
	}else if(edad > 18 && edad < 27){
		printf("Juvenil");
	}else if(edad > 26){
		printf("Mayor");
	}
	return 0;
}
