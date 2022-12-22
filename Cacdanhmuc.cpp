#include "QuanLy.h"

Aothun::Aothun()
{
	name = " ";
	size = " ";
}
Aothun::Aothun(string name, string size)
{
	this->name = name;
	this->size = size;
}
Aothun::Aothun(const Aothun& tmp)
{
	this->name = tmp.name;
	this->size = tmp.size;
}
Aothun::~Aothun()
{

}

void Aothun::setName(string name)
{
	this->name = name;
}

void Aothun::Nhap()
{
	cout << "Nhap ten ao can mua: ";
	getline(cin, this->name, '\n');
	cout << "Nhap size ao: ";
	getline(cin, this->size, '\n');
}
void Aothun::Xuat()
{
	cout << "Ten ao can mua: " << this->name << endl;
	cout << "Ten size ao: " << this->size << endl;
}

AothunNam::AothunNam():Aothun()
{

}
AothunNam::AothunNam(string name, string size):Aothun(name, size)
{

}
AothunNam::AothunNam(const Aothun& tmp):Aothun(tmp)
{

}
AothunNam::~AothunNam()
{

}
void AothunNam::Nhap()
{
	cout << "Nhap ten ao can mua: ";
	getline(cin, this->name, '\n');
	cout << "Nhap size ao: ";
	getline(cin, this->size, '\n');
}
void AothunNam::Xuat()
{
	cout << "Ten ao can mua: " << this->name << endl;
	cout << "Ten size ao: " << this->size << endl;
}
void AothunNam::setName(string name)
{
	this->name = name;
}

AothunNu::AothunNu() :Aothun()
{

}
AothunNu::AothunNu(string name, string size) : Aothun(name, size)
{

}
AothunNu::AothunNu(const Aothun& tmp) : Aothun(tmp)
{

}
AothunNu::~AothunNu()
{

}
void AothunNu::Nhap()
{
	cout << "Nhap ten ao can mua: ";
	getline(cin, this->name, '\n');
	cout << "Nhap size ao: ";
	getline(cin, this->size, '\n');
}
void AothunNu::Xuat()
{
	cout << "Ten ao can mua: " << this->name << endl;
	cout << "Ten size ao: " << this->size << endl;
}
void AothunNu::setName(string name)
{
	this->name = name;
}



Non::Non()
{
	name = " ";
}
Non::Non(string name)
{
	this->name = name;
}
Non::Non(const Non& tmp)
{
	this->name = tmp.name;
}
Non::~Non()
{

}
void Non::Nhap()
{
	cout << "Nhap ten san pham: ";
	getline(cin, this->name, '\n');
}
void Non::Xuat()
{
	cout << "Ten san pham: " << this->name << endl;
}


Aokhoac::Aokhoac()
{
	name = " ";
}
Aokhoac::Aokhoac(string name)
{
	this->name = name;
}
Aokhoac::Aokhoac(const Non& tmp)
{
	this->name = tmp.name;
}
Aokhoac::~Aokhoac()
{

}
void Aokhoac::Nhap()
{
	cout << "Nhap ten san pham: ";
	getline(cin, this->name, '\n');
}
void Aokhoac::Xuat()
{
	cout << "Ten san pham: " << this->name << endl;
}



