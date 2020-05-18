#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "Spanish");
	int a = 0;
	int sumaM = 0;
	int sumaN = 0;
	int accN = 0;
	for(int i=0;i<50;i++){
		printf("Ingrese un número: ");
		scanf("%i", &a);
		if(a<-10){
			sumaM = sumaM + a;
		}
		if(a>100){
			sumaN = sumaN + a;
			accN = accN + 1;
		}
	}
	float promedioN = 0;
	promedioN = sumaN / accN;
	printf("El promedio de los mayores que 100 es igual a: ");
	printf("%f", promedioN);
	printf("\nLa suma de los menores que -10 es igual a: ");
	printf("%i", sumaM);
	
	return 0;
}
