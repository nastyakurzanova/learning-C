#include "iostream"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int input = 0;
	while(input == 0){
		int k = 0, m, n, sum = 0, i = 0;	
		cout << "Введите m и нажмите enter" << endl;
		cin >> m;
		if (m == 0) {
			cout << "Нельзя делить на 0!" << endl;
		}
		else
		{ 
			cout << "Введите n и нажмите enter" << endl;
			cin >> n;
			if (m >= n) {
				cout << "m должно быть меньше n!" << endl;
				}
				else {
				while (i < n)
				{
					if (m == 1)
					{
						break;
					}
					else {
						if (m == 5)
						{
							cout << "Число не может одновременно делиться и не делиться на 5!" << endl;
							break;
						}
						else {
							if (k % m != 0)
							{
								sum += k;
								i += 1;
								cout << "k = " << k << " ";
							}
							k += 5;
						}
					}
				}
				cout << "sum = " << sum << endl;
			}
		}
		cout << "Для продолжения программы нажмите 0 и нажмите enter" << endl;
		cin >> input;
	} 
	return 0;
}
