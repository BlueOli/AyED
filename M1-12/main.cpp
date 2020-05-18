#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int suma = 0;
	for(int i=1;i<101;i++){
		printf("%i", i);
		if(i != 100){
			printf(", ");	
		}
		suma = suma + i;
	}
	printf("\nLa suma es igual a ");
	printf("%i", suma);
	return 0;
}
