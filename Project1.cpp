#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	bool res;
	double x, y;
n:cout << "Ввести x-->";
	cin >> x;
	cout << "x=" << x << endl;
	cout << "Ввести y-->";
	cin >> y;
	cout << "y=" << y << endl;
	res = (y <= 7) && (y >= x) && (y >= -x) || (y >= -7) && (y <= x) && (y <= -x);
	if (res) cout << "Точка попадає в область" << endl;
	else cout << "Точка НЕ попадає в область" << endl;
	goto n; //повторення 
	return 0;
}