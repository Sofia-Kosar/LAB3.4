// Lab_03_4.cpp
// < ����� �����  >
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 10
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ������� ��������
	double a;
	double b;
	double R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "R = "; cin >> R;
	

	// ������������ � ����� ����
	if (((y >= -b && y <= 0) && (pow(x, 2) + pow(y, 2) <= pow(R, 2)) && (x <= 0)) ||
		((y >= 0 && y <= b) && (pow(x, 2) + pow(y, 2) >= pow(R, 2)) && (x <= a)))
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	cin.get();
	return 0;
}