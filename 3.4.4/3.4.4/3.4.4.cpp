#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	float n, y, tmp1, tmp2;
	int input = 0;
	int i;
	while (input == 0)
	{
		tmp1 = 0; tmp2 = 0;
		cout << "Введите n" << endl;
		cin >> n;
		if (n < 0) {
			cout << "n должно быть >= 0 " << endl;
		}
		else {
			for (i = n; i > 0; i--)
			{
				tmp2 = sqrt(2 * i + tmp1);
				tmp1 = tmp2;
				if (i == n) {
					cout << "i = " << i << endl;
					cout << setprecision(12) << tmp1 << endl << endl;
				}
				if (i == 3 || i == 5 || i == 10) {
					cout << "i = " << i << endl;
					cout << setprecision(12) << tmp2 << endl << endl;
				}
			}
			cout << "i = " << i << endl;
			cout << setprecision(12) << tmp2 << endl << endl;
		}
		cout << "Для продолжения программы нажмите 0" << endl;
		cin >> input;
	}
}