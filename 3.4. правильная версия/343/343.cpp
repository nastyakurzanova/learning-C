#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void func(int n)
{
	float tmp1, tmp2;
	tmp1 = 0; tmp2 = 0;
	for (int i = n; i > 0; i--)
	{
		tmp2 = sqrt(2 * i + tmp1);
		tmp1 = tmp2;
	}
	cout << setprecision(12) << tmp2 <<  endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	char a;
	do 
	{
		cout << "Введите n" << endl;
		cin >> n;
		if (n < 0)
		{
			cout << "n должно быть не отрицательным целым числом" << endl;
			
		}
		else {
			if (n > 3)
			{
				cout << "3: ";
				func(3);
			}
			if (n > 5)
			{
				cout << "5: ";
				func(5);
			}
			if (n > 10)
			{
				cout << "10: ";
				func(10);
			}
			if (n != 3 || n != 5 || n != 10)
			{
				cout << n << ": ";
				func(n);
			}
		}
		cout << "Введите 0, если хотите продолжить" << endl;
		cin >> a;
	} while (a == '0');
}