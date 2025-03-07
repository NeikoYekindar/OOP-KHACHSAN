#include "hoadon.h"
#include<iostream>
using namespace std;
hoadon::hoadon() {
	this->ds = NULL;
	this->sl = 0;
	this->kh = NULL;
}
void hoadon::nhap() {
	cout << "Nhap Thong tin khach hang: " << endl;
	kh = new thongtinkh;
	kh->nhap();
	cout << "Nhap so luong dich vu: ";
	cin >> sl;
	ds = new dichvu*[sl];
	for (int i = 0; i < sl; i++) {
		cout << "1.Dich vu giat" << endl;
		cout << "2.Dich vu gui xe" << endl;
		cout << "=====================" << endl;
		cout << "Chon dich vu: ";
		int loai;
		cin >> loai;
		if (loai == 1) {
			ds[i] = new giat;
			ds[i]->nhap();
		}
		else if (loai == 2) {
			ds[i] = new guixe;
			ds[i]->nhap();
		}
	}
}
int hoadon::tongtien()const {
	int tien = 0;
	for (int i = 0; i < sl; i++) {
		tien += ds[i]->giatien();
	}
	return tien;
}
void hoadon::xuat()const {
	cout << "Thong tin khach hang:" << endl;
	kh->xuat();
	cout << "Tong hoa don: " << tongtien() << endl;
	cout << "===============================" << endl;
	cout << "Thong tin dich vu la: " << endl;
	for (int i = 0; i < sl; i++) {
		ds[i]->xuat();
		cout << "===================" << endl;
	}
}
