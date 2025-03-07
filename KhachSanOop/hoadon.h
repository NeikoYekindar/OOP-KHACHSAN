#pragma once
#include"dichvu.h"
#include"thongtinkh.h"
using namespace std;
class hoadon
{
protected:
	dichvu** ds;
	thongtinkh* kh;
	int sl;
public:
	hoadon();
	void nhap();
	void xuat()const;
	int tongtien()const;
};

