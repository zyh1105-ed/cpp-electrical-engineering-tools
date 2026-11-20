#include<iostream>
#include<iomanip>
using namespace std;

double calculateCurrent(double v, double r)
{
	return (v / r);
}
double calculatePower(double v, double i)
{
	return v * i;
}
bool isOverload(double i, double limit)
{
	return i > limit;
}

int main()
{
	double v, r;
	cout << "Enter V and R: ";
	cin >> v >> r;
	
	double i = calculateCurrent(v, r);
	double p = calculatePower(v, i);
	
	cout << fixed << setprecision(3);
	cout << "I = " << i << " A, P = " << p << " W\n";
	
	if (isOverload(i, 2.0))
	cout << "OVERLOAD\n";
	
	return 0;
}
