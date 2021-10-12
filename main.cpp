#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int secret_number = rand() % (9999 - 1000 + 1) + 1000;
	cout << secret_number << endl;

	int a, b, c, d;
	a = secret_number / 1000;
	b = secret_number / 100 % 10;
	c = secret_number / 10 % 10;
	d = secret_number % 10;
	int sum_number = a + b + c + d;
	//cout << a << endl << b << endl << c << endl << d << endl;

	if (a == d && b == c) {
		cout << " Это палиндром!" << endl;
	}
	else {
		cout << "Это обычное число" << endl;
	}

	double sr_arif = sum_number / 4.;
	cout << "Среднее арифметическое цифр = " << sr_arif << endl;

	int sum = 0;
	if (a % 2 != 0) {
		sum += a;
	}
	if (b % 2 != 0) {
		sum += b;
	}
	if (c % 2 != 0) {
		sum += c;
	}
	if (d % 2 != 0) {
		sum += d;
	}
	cout << "Сумма нечетных цифр = " << sum << endl;

	int rub = a * 10 + b, coins = c * 10 + d, counter_c = 0, counter_r = 0;
	if ((coins > 10 && coins < 20) || (d >= 5 && d <= 9)) {
		counter_c = 1; /*копеек*/
	}
	else if (d == 1) {
		counter_c = 2; /*копейка*/
	}
	else if (d >= 2 && d <= 4) {
		counter_c = 3; /*копейки*/
	}
	cout << rub;
	if ((rub > 10 && rub < 20) || (b >= 5 && b <= 9)) {
		counter_r = 1; /*рублей*/
	}
	else if (b == 1) {
		counter_r = 2; /*рубль*/
	}
	else if (b >= 2 && b <= 4) {
		counter_r = 3; /*рубля*/
	}

	switch (counter_r) {
	case 1: cout << " рублей "; break;
	case 2: cout << " рубль "; break;
	case 3: cout << " рубля "; break;
	}

	cout << coins;
	switch (counter_c) {
	case 1: cout << " копеек" << endl; break;
	case 2: cout << " копейка" << endl; break;
	case 3: cout << " копейки" << endl; break;
	}

	int nok = 0;
	if (rub >= coins) {
		nok = rub + 1;
	}
	else if (coins > rub) {
		nok = coins + 1;

	}
	while (true) {

		if (nok % rub == 0 && nok % coins == 0) {
			cout << "НОК равен " << nok;
			break;
		}
		else {
			nok++;
		}
	}

	return 0;
}