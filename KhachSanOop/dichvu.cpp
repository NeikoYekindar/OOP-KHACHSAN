#include "dichvu.h"
#include<iostream>
using namespace std;
void dichvu::nhap() {}
void dichvu::xuat()const{
}
int dichvu::giatien()const {
	return 0;
}
giat::giat() {
	this->gia = 0; 
	this->sokg = 0;
	this->solg = 0;
	this->n = 0;
}
void giat::nhap() {
	dichvu::nhap();
	cout << "Dich vu giat: " << endl;
	cout << "Nhap khoi luong quan ao: ";
	cin >> sokg;
	cout << "Co quan ao dat biet hay khong(1-co , 2-khong): ";
	cin >> n;
	if (n == 1) {
		cout << "Nhap so luong quan ao dat biet: ";
		cin >> solg;
	}
	else if (n == 2) {
		solg = 0;
	}
}
int giat::tiendvcongthem()const {
	return solg * 25000;
}
int giat::giatien()const {
	int tien = 0;
	tien = sokg * 12000 + tiendvcongthem();
	if (sokg > 10) {
		tien = tien - tien * 0.05;
	}
	else if (sokg <= 10) {
		tien = tien;
	}
	return tien;
}
void giat::xuat()const {
	dichvu::xuat();
	cout << "Dich vu giat: " << endl;
	cout << "Khoi luong quan ao: " << sokg << endl;
	if (n == 1) {
		cout << "So luong quan ao dat biet: " << solg << endl;
		cout << "So tien cong them: " << tiendvcongthem() << endl;
	}
	cout << "Tien cho dich vu giat: " << giatien() << endl;

}
guixe::guixe() {
	this->gia = 0;
	this->gio = 0;
}
void guixe::nhap() {
	dichvu::nhap();
	cout << "Dich vu gui xe: " << endl;
	cout << "Nhap so gio gui xe: ";
	cin >> gio;
}
int guixe::giatien()const {
	int gia = 0;
	gia = gio * 1000;
	if (gio > 12) {
		gia = gia - gia * 0.1;
	}
	else {
		gia = gia;
	}
	return gia;
}
void guixe::xuat()const {
	dichvu::xuat();
	cout << "Dich vui gui xe: " << endl;
	cout << "So gio gui xe: " << gio << endl;
	cout << "Tien cho dich vu gui xe: " << giatien() << endl;
}