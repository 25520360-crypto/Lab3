#include "cNhanVienSX.h"
#include <iostream>
#include <iomanip>
using namespace std;

cNhanVienSX::cNhanVienSX() : soSanPham(0), donGia(0) {}
cNhanVienSX::cNhanVienSX(string maNV, string hoTen, NgaySinh ns, int sp, double dg)
    : maNV(maNV), hoTen(hoTen), ngaySinh(ns), soSanPham(sp), donGia(dg) {}

string cNhanVienSX::getMaNV() const { return maNV; }
string cNhanVienSX::getHoTen() const { return hoTen; }
NgaySinh cNhanVienSX::getNgaySinh() const { return ngaySinh; }
int cNhanVienSX::getSoSanPham() const { return soSanPham; }
double cNhanVienSX::getDonGia() const { return donGia; }
void cNhanVienSX::setMaNV(string m) { maNV = m; }
void cNhanVienSX::setHoTen(string h) { hoTen = h; }
void cNhanVienSX::setNgaySinh(NgaySinh ns) { ngaySinh = ns; }
void cNhanVienSX::setSoSanPham(int sp) { soSanPham = sp; }
void cNhanVienSX::setDonGia(double dg) { donGia = dg; }

double cNhanVienSX::tinhLuong() const {
    return soSanPham * donGia;
}

int cNhanVienSX::tinhTuoi(int namHienTai) const {
    return namHienTai - ngaySinh.nam;
}

void cNhanVienSX::nhap() {
    cout << "Ma NV: "; cin >> maNV;
    cin.ignore();
    cout << "Ho ten: "; getline(cin, hoTen);
    cout << "Ngay sinh (dd mm yyyy): ";
    cin >> ngaySinh.ngay >> ngaySinh.thang >> ngaySinh.nam;
    cout << "So san pham: "; cin >> soSanPham;
    cout << "Don gia: "; cin >> donGia;
}

void cNhanVienSX::xuat() const {
    cout << left << setw(10) << maNV
         << setw(25) << hoTen
         << setw(2) << ngaySinh.ngay << "/"
         << setw(2) << ngaySinh.thang << "/"
         << setw(6) << ngaySinh.nam
         << setw(8) << soSanPham
         << fixed << setprecision(0)
         << setw(12) << donGia
         << setw(15) << tinhLuong() << endl;
}
