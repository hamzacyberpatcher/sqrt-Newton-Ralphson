#include <iostream>
using namespace std;

double abs(double a, double b)
{
	if (a > b) return a;
	return b;
}

double sqrt(double num)
{
	double x = 1;
	while(abs(num - x * x) > 0.00000000001)
	{
		x = (x + num / x) / 2;
	}
	return x;
}

int main()
{
	double num;
	cout << "Enter a number: ";
	cin >> num;
	cout << sqrt(num) << endl;
	return 0;
}
