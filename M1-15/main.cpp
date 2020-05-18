#include <iostream>
#include <string.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "Spanish");
	
	char gravedad;
	int tipoInfraccion = 0;
	int valorMulta = 0;
	int sumaG = 0;
	int sumaM = 0;
	int sumaL = 0;
	int acc3 = 0;
	int acc4 = 0;
	
	for(int i=0; i<20; i++){
		printf("Ingrese la gravedad ('L', 'M', 'G'): ");
		scanf(" %c", &gravedad);
		printf("Ingrese el tipo de Infracción: ");
		scanf("%i", &tipoInfraccion);
		printf("Ingrese el valor de la multa: ");
		scanf("%i", &valorMulta);
		if(gravedad == 'G'){
			sumaG = sumaG + valorMulta;
			if(tipoInfraccion == 3){
				acc3 = acc3 + 1;
			}
			if(tipoInfraccion == 4){
				acc4 = acc4 + 1;
			}
		}
		if(gravedad == 'M'){
			sumaM = sumaM + valorMulta;
		}
		if(gravedad == 'L'){
			sumaL = sumaL+ valorMulta;
		}
		char gravedad = ' ';
		int tipoInfraccion = 0;
		int valorMulta = 0;
	}
	
	printf("La multa total de las infracciones graves es igual a: ");
	printf("%i", sumaG);
	printf("\nLa multa total de las infracciones medianas es igual a: ");
	printf("%i", sumaM);
	printf("\nLa multa total de las infracciones leves es igual a: ");
	printf("%i", sumaL);
	if(acc3>3 && acc4>3){
		printf("\nClausurar fábrica");
	}
	
	return 0;
}
