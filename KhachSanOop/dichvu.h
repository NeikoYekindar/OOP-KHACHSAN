#pragma once
using namespace std;
class dichvu
{
public:
	virtual void nhap();
	virtual void xuat()const;
	virtual int giatien()const;
};
class giat :public dichvu
{
protected:
	int gia;
	int sokg;
	int solg;
	int n;
public:
	giat();
	virtual void nhap();
	virtual void xuat()const;
	virtual int tiendvcongthem()const;
	virtual int giatien()const;
};
class guixe :public dichvu
{
protected:
	int gia;
	int gio;
public:
	guixe();
	virtual void nhap();
	virtual void xuat()const;
	virtual int giatien()const;
};

