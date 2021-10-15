// Lab_04_7.cpp
// Вольвенко Іван
// Обчислення суми ряду Тейлора за допомогою ітераційних циклів та рекурентних співвідношень
// Вкладені цикли
// Варіант 13
 
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double xp, xk, x, dx, eps, a = 0, R = 0, S = 0;
	int n = 0;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;

	cout << fixed; 
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << "     |"
		<< setw(10) << "exp(-x^2)" << "   |"
		<< setw(7) << "S" << "      |"
		<< setw(5) << "n" << "   |"
		<< endl;
	cout << "-------------------------------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		n = 0;
		a = 1;
		S = a;
		do {
			n++;
			R = (-1) * (pow(x, 2) / n);
			a *= R;
			S += a;
		} while (abs(a) >= eps);

		cout << "|" << setw(7) << setprecision(2) << x << "   |"
			<< setw(10) << setprecision(5) << exp((-1)*pow(x,2)) << "   |"
			<< setw(10) << setprecision(5) << S << "   |"
			<< setw(5) << n << "   |"
			<< endl;

		x += dx;
	}
	cout << "-------------------------------------------------" << endl;
	
	return 0;
}