#include <iostream>
using namespace std;
int main()
{
	cout << "dientichchuvihinhchunhat\n";
	double chieudai, chieurong, dientich, chuvi;
	cout << "Nhap chieu dai:"; cin >> chieudai;
	cout << "Nhap chieu rong:"; cin >> chieurong;
	chuvi = (chieudai + chieurong) * 2;
	dientich = chieudai * chieurong;
	cout << "chu vi: " << chuvi << endl;
	cout << "dientich: " << dientich << endl;
	return 0;


}