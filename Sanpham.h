#pragma once
#include "QuanLy.h"

class Sanpham {
	string name;
	Danhmuc loaisp;
	int gia;
	int soluong;
public:
	Sanpham();
	Sanpham(string, Danhmuc, int, int);
	Sanpham(const Sanpham& tmp);
	~Sanpham();
	int getGia();
	void Nhap();
	void Xuat();
	void setSoluong(int t);
};