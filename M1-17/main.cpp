#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "Spanish");
	
	float a = 0;
	int acc1 = 0;
	int acc2 = 0;
	int acc3 = 0;
	int acc4 = 0;
	
	printf("Ingrese un nuevo sueldo (0 para terminar): ");
	scanf("%f", &a);
	while(a != 0){
		if(a < 1520){
			acc1 = acc1 + 1;
		} else if(a < 2780){
			acc2 = acc2 + 1;
		} else if(a < 5999){
			acc3 = acc3 + 1;
		} else{
			acc4 = acc4 + 1;
		}
		printf("Ingrese un nuevo sueldo (0 para terminar): ");
		scanf("%f", &a);
	}
	printf("La cantidad de empleados que gana menos de $1.520 es %i\n", acc1);
	printf("La cantidad de empleados que gana entre $1.520 y $2.779 es %i\n", acc2);
	printf("La cantidad de empleados que gana entre $2.780 y $5.998 es %i\n", acc3);
	printf("La cantidad de empleados que gana $5.999 o más es %i", acc4);
	
	return 0;
}
