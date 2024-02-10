#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
	double e = 0.000001, x = -0.2, k, y, m2, sum;
	int i, h;
	for (h = 0; h <= 5; h++)
	{
		sum = 1;
		m2 = 1;
		x += 0.2;
		i = 1;
		while (true)
		{
			k = x * (i * i + 1.) / (2 * i * (i*(i - 2) + 2));
			m2 = k * m2;
			sum += m2;
			if (m2 < e) {
				break;
			}
			i++;
		}
		y = (x * x / 4 + x / 2 + 1) * exp(x / 2);
		cout << "x = " << x << endl;
		cout << setprecision(log10(10 / e)) <<"y = "<< y << endl;
		cout << setprecision(log10(10 / e)) << "sum = "<< sum << endl;
		cout <<"i = "<< i << endl;
		cout << " " << endl;
	}
}