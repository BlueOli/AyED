#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int num;
	
	cout << "Enter number: ";
	cin >> num;
	
	int a;
	int b;
	int c;
	
	a = num / 5;
	b = num % 5;
	c = a / 7;
	
	cout << "First result is: " << a << endl;
	cout << "Second result is: " << b << endl;
	cout << "Third result is: " << c << endl;
	
	
	
	
	
	return 0;
}
