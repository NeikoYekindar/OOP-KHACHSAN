#include "thongtinkh.h"
#include<iostream>
#include<string>
using namespace std;
void thongtinkh::nhap() {
	cout << "Nhap ten khach hang: ";
	getline(cin, ten);
	cout << "Nhap ma so khach hang:";
	getline(cin, maso);
}
void thongtinkh::xuat()const {
	cout << "Ho va ten: " << ten << endl;
	cout << "Ma so khach hang: " << maso << endl;
}
