#include "Header.h"
using namespace std;
void Simple_Iterations (double eps, double k)
{
	double x1 = 0, x2 = 0; int n = 1e8, it;
	for (int i = 1; i < n; i++)
	{
		it = i;
		x2 = k * cos(x1);
		if (abs(x2 - k * cos(x2)) < eps) break;
		x1 = x2;
	}
	cout <<  "Метод простых итераций:" << endl;
	cout << "X = " << setprecision(log10(10 / eps)) << x2 << endl << "Итерации: " << it << endl << endl;
}

void Newton(double eps, double k)
{
	double x1 = 0, x2 = 0; int n = 1e8, it;

	for (int i = 1; i < n; i++)
	{
		it = i;
		x2 = x1 - (x1 - k * cos(x1)) / (1 + k * sin(x1));
		if (abs(x2 - x1) < eps) 
		break;
		x1 = x2;
	}
	cout << "Метод Ньютона:" << endl;
	cout << "X = " << setprecision(log10(1 / eps)) << x2 << endl << "Итерации: " << it << endl << endl;
}

void Bisection(double eps, double k)
{
	double x1 = 0, x2 = 4*atan(1), center; int n = 1e8, it;

	for (int i = 1; i < n; i++)
	{
		it = i;
		center = x1 + (x2 - x1) / 2;
		if ((x1 - k * cos(x1)) * (center - k * cos(center)) < 0)
		{
			x2 = center;
		}
		else
		{
			x1 = center;
		}
		if (abs(x2 - k * cos(x2)) < eps) break;
	}
	cout << "Метод половинного деления:" << endl;
	cout << "X = " << setprecision(log10(1 / eps)) << center << endl << "Итерации: " << it << endl << endl << endl;
}
