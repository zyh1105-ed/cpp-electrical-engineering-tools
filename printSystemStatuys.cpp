#include<iostream>
using namespace std;
void printSystemStatus(double voltage, double current)
{
	cout << "Supply: " << voltage << " V, " << current << "A\n";
	if (current > 2.0)
	cout << "WARNING: high current\n";
}

int main()
{
	printSystemStatus(5.0, 67);
	return 0;
}