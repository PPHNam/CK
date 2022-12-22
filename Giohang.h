#pragma once
#include "QuanLy.h"

class Giohang {
	vector <Sanpham> list;
	int num;
	int tienhang;
	int thanhtoan;
public:
	Giohang();
	Giohang(vector<Sanpham> list, int num, int tienhang, int thanhtoan);
	Giohang(const Giohang& tmp);
	~Giohang();
	void Nhap();
	void Xuat();
};