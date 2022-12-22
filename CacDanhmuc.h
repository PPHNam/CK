#pragma once
#include <cstring>
#include <string>
#include <iostream>
using namespace std;

class Aothun {
protected:
	string name;
	string size;
public:
	Aothun();
	Aothun(string name, string size);
	Aothun(const Aothun& tmp);
	~Aothun();
	void Nhap();
	void Xuat();
	void setName(string name);
};

class AothunNam : public Aothun {
public:
	AothunNam();
	AothunNam(string name, string size);
	AothunNam(const Aothun& tmp);
	~AothunNam();
	void Nhap();
	void Xuat();
	void setName(string name);
};

class AothunNu : public Aothun {
public:
	AothunNu();
	AothunNu(string name, string size);
	AothunNu(const Aothun& tmp);
	~AothunNu();
	void Nhap();
	void Xuat();
	void setName(string name);
};

class Non {
	string name;
public:
	Non();
	Non(string name);
	Non(const Non& tmp);
	~Non();
	void Nhap();
	void Xuat();
};

class Aokhoac {
	string name;
public:
	Aokhoac();
	Aokhoac(string name);
	Aokhoac(const Aokhoac& tmp);
	~Aokhoac();
	void Nhap();
	void Xuat();
};