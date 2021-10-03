#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	int days, months, year, daysinyear;
	cout << "Введите дату ";
	cin >> days >> months;
	cout << "Високосный ли год? 1/0 ";
	cin >> year;
	if (year == 1) {
		daysinyear = 366;
	}
	else daysinyear = 365;
	switch (months -1) {
	case 12:
		daysinyear -= 31;
	case 11:
		daysinyear -= 30;
	case 10:
		daysinyear -= 31;
	case 9:
		daysinyear -= 30;
	case 8:
		daysinyear -= 31;
	case 7:
		daysinyear -= 31;
	case 6:
		daysinyear -= 30;
	case 5:
		daysinyear -= 31;
	case 4:
		daysinyear -= 30;
	case 3:
		daysinyear -= 31;
	case 2:
		if (year == 1) {
			daysinyear -= 29;
		}
		else daysinyear -= 28;
	case 1:
		daysinyear -= 31;
		break;
	}
	cout << daysinyear - days +1;
	return 0;
}
