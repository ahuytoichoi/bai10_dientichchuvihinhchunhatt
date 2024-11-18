#include <iostream>
using namespace std;
int main()
{
	cout << "tinh dien tich va chu vi hinh chu nhat\n";
	double dai, rong, chuvi, dientich;
	cout << "nhap chieu dai:";cin >> dai;
	cout << "nhap chieu rong:";cin >> rong;
	chuvi = (dai + rong) * 2;
	dientich = dai * rong;
	cout << "chu vi:" << chuvi << endl;
	cout << "dien tich:" << dientich << endl;
	return 0;
}