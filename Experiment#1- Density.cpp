#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double mass, density;
	cout << "Input mass:" <<endl;
	cin >> mass;
	cout << "Mass = " << mass << "g" <<endl;
	cout << "Input density: " << endl;
	cin>> density;
	cout << "Density =" << density << "g/cm^3" << endl;
	cout << "Volume of the opbject = " << mass/(4*density) << "cm^3" << endl;
	_getch();
	return 0;
}
