#include "Header.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int e; double eps = 1e-6, k;
	char a = 0;
	do
	{
		cout << "Введите коэффициент перед косинусом " << endl;
		cin >> k;
		if (k == 1)
		{
			cout << "Выберите точность: 1) 1e-6  2) 1e-8" << endl;
			cin >> e;
			if (e == 1) {
				eps = 1e-6;
			}
			else {
				if (e == 2) {
					eps = 1e-8;
				}
				else {
					cout << "Введенно некорректное значение";
				}
			}
		}
		else {
			eps = 1e-6;
		}
		Simple_Iterations(eps, k); 
		Newton(eps, k); 
		Bisection(eps, k);
		cout << "Введите 0, если хотите продолжить вводить значения" << endl;
		cin >> a;
	} while (a == '0');
}
