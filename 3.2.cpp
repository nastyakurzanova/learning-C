#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	setlocale(LC_CTYPE, "rus");
	int a, i, p, t;
	int input = 0;
	while (input == 0) {
		cout << "Введите a и нажмите enter" << endl;
		cin >> a;
		p = 1;
		if (a >= 0) {
			for (i = 2; i <= 8; i += 2) {
				p *= i * i - a;
			}
			cout << "p = " << p << endl;
		}
		else {
			for (i = 3; i <= 9; i += 3) {
				p *= (i - 2);
			}
			cout <<"p = "<< p << endl;
		}
		cout << "Для продолжения программы введите 0" << endl;
		cin >> input;
	}

}