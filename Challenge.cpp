#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>
using namespace std;

int main()
{
	
	double Vs;
	int R1;
	int R2;
	string label;
	
	cin >> Vs >> R1 >> R2;
	
	cin.ignore();
	
	getline(cin, label);
	
	double Req = static_cast<double>(R1 * R2) / (R1 + R2);
	
	double I = Vs / Req;
	double P = pow(I, 2) * Req;
	
	cout << "Circuit: lab bench A " << label << endl;
	
	cout << fixed << setprecision(3);
	
	cout << "Req = " << Req << " ohm" << endl;
	cout << "I = " << I << " A" << endl;
	cout << "P = " << P << " W" << endl;
	
	return 0;
	
	
}
