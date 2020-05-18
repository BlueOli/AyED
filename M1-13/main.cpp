#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int N = 0;
	int M = 0;
	int prod = 0;
	printf("Ingrese N: ");
	scanf("%i", &N);
	printf("Ingrese M: ");
	scanf("%i", &M);
	for(int i=1; i<=M; i++){
		prod = prod + N;
	}
	printf("El producto entre N y M es igual a: ");
	printf("%i", prod);
	return 0;
}
