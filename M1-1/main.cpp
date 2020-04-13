#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int a;
	int b;
	
	cout<< "Ingrese el primer numero: ";
	cin >> a;
	cout<< "Ingrese el segundo numero: ";
	cin >> b;
	
	int suma = a + b;
	
	cout << "La suma de "<< a << " + " << b << " es igual a " << suma;
	
	return 0;
}
