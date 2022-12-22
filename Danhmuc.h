#pragma once
#include "QuanLy.h"

class Danhmuc {
	string name;
public:
	Danhmuc();
	Danhmuc(string name);
	Danhmuc(const Danhmuc& tmp);
	~Danhmuc();
	string getName();
	void Nhap();
	void Xuat();
};