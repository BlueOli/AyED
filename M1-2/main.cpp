#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int day;
	int month;
	int year;
	
	cout << "Input day: ";
	cin >> day;
	cout << "Input month: ";
	cin >> month;	
	cout << "Input year: ";
	cin >> year;
	
	int date;
	date = day + month * 100 + year * 10000;
	
	cout << "The date (AAAA/MM/DD) is: " << date;
	
	return 0;
}
