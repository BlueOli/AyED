#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int date;
	cout << "Input date (YYYYMMDD): ";
	cin >> date;
	
	int day;
	int month;
	int year;
	
	year = date / 10000;
	month = date / 100 - year * 100;
	day = date - year * 10000 - month * 100;
	
	cout << "Year is: " << year << endl;
	cout << "Month is: " << month << endl;
	cout << "Day is: " << day << endl;
	
	return 0;
}
