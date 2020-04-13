#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int a;
	int b;
	
	cout << "Input a number: ";
	cin >> a;
	cout << "Input another number: ";
	cin >> b;
	
	int major;
	if(a > b){
		major = a;
	}
	else{
		major = b;
	}
	
	cout << "The greatest number was: " << major;
	
	return 0;
}
