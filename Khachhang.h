#pragma once
#include "QuanLy.h"

class Khachhang {
	string name;
	string email;
	string addr;
	bool gender;
	string dob;
	Giohang giohang;
	Donhang donhang;
public:
	Khachhang();
	Khachhang(string name, string email, string addr, bool gender, string dob, Giohang giohang, Donhang donhang);
	Khachhang(const Khachhang& tmp);
	~Khachhang();
	void Nhap();
	void Xuat();
};