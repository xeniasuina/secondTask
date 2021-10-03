//—колько дней до нового года
//ѕлан программы: 
//				 1. ¬водим дату 
/*2. спрашиваем, високосный ли год
если да, то 366 дней в году
если нет, то 365 дней в году
3. вводим свитч кейсы по мес€цам
*/

#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	int days, months, year, daysinyear;
	cout << "¬ведите дату ";
	cin >> days >> months;
	cout << "¬исокосный ли год? 1/0 ";
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