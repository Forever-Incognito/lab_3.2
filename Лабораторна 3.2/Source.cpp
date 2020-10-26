// Lab_03_2.cpp
// < Маковського Андрія >
// Лабораторна робота No 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 18

#include <iostream>
using namespace std;

int main() {
	double a;
	double b;
	double c;
	double x;
	double F;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;

	if (x < 0 && b != 0)
		F = a * x * x - b * x * x;
	if (x>0 && b == 0)
		F = (x - a) / (x - c);
	if (!(x < 0 && b != 0) && !(x > 0 && b == 0))
		F = (x + 5) / (c * (x - 10));

	cout << "1) F = " << F << endl;


	if (x < 0 && b != 0)
		F = a * x * x - b * x * x;
	else
		if (x > 0 && b == 0)
			F = (x - a) / (x - c);
		else
			F = (x + 5) / (c * (x - 10));

	cout << endl;
	cout << "2) F = " << F << endl;

	cin.get();
	return 0;
}