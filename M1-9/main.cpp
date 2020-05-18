#include <iostream>
#include <string.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "Spanish");
	int mes;
	int year;
	printf("Ingrese un mes (1 = enero, 12=diciembre): ");
	scanf("%i", &mes);
	printf("Ingrese un año: ");
	scanf("%i", &year);
	if(mes < 8){
		if(mes % 2 == 0){
			if(mes == 2){
				if((year % 4 == 0 && year % 100 != 0) || year % 4 == 0){
					printf("El mes tiene 29 días");
				}
				else{
					printf("El mes tiene 28 días");
					}
			}else{
				printf("El mes tiene 30 días");	
			}		
		}else{
			printf("El mes tiene 31 días");
		}		
	}else{
		if(mes % 2 == 0){
			printf("El mes tiene 31 días");		
		}else{
			printf("El mes tiene 30 días");
		}	
	}	
	return 0;
}
