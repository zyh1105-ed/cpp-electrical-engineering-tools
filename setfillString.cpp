#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main ()
{
	string item1 = "Gaming Mouse";
	string item2 = "Mechanical Keyboard";
	string item3 = "USB-C Cable";
	
	double price1 = 49.99;
	double price2 = 119.50;
	double price3 = 67.67;
	
	
	
	cout << fixed << setprecision(2);
	
	cout << setw(25) << left << "ITEM" << setw(10) << right << "PRICE ($)" << endl;
	
	
    cout << setfill('-') << setw(35) << "" << endl;
    cout << setfill(' ');
    
    cout << setw(25) << left << item1 << "$" << setw(9) << right << price1 << endl;
    cout << setw(25) << left << item2 << "$" << setw(9) << right << price2 << endl;
    cout << setw(25) << left << item3 << "$" << setw(9) << right << price3 << endl;
    
    cout << setfill('-') << setw(35) << "" << endl;
    cout << setfill(' ');
    
    
    double total = price1 + price2 + price3;
    cout << setw(25) << left << "TOTAL: " << "$" << setw(9) << right << total << endl;
    
    return 0;
}
