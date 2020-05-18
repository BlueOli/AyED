#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a;
	int acc = 0;
	printf("Ingrese un valor: ");
	scanf("%i", &a);
	while(a>-1){
		printf("El valor es %i\n", a);
		printf("Ingrese un valor: ");
		scanf("%i", &a);
		acc = acc + 1;
	}
	printf("La cantidad de valores ingresados fue %i", acc);
	return 0;
}
