#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int M = 0;
	int valor = 0;
	printf("Ingrese el valor M: ");
	scanf("%i", &M);
	for(int i=0; i<M; i++){
		valor = i*3;
		if(i == M-1){
			if(valor%5 == 0){
			M = M + 1;
			}else{
			printf("%i", valor);
			}	
		}else{
			if(valor%5 == 0){
			M = M + 1;
			}else{
			printf("%i, ", valor);
			}
		}
	}
	return 0;
}
