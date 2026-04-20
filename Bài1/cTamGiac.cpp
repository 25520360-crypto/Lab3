#include "cTamGiac.h"
#include <iostream>
#include <cmath>

using namespace std;

#define PI 3.14159265358979323846

cTamGiac::cTamGiac() {}
cTamGiac::~cTamGiac() {}

void cTamGiac::nhap() {
    cout << "Nhap dinh A:\n"; A.nhap();
    cout << "Nhap dinh B:\n"; B.nhap();
    cout << "Nhap dinh C:\n"; C.nhap();
}

void cTamGiac::xuat() {
    cout << "Tam giac: A"; A.xuat();
    cout << ", B"; B.xuat();
    cout << ", C"; C.xuat();
    cout << endl;
}

float cTamGiac::tinhChuVi() {
    return A.khoangCach(B) + B.khoangCach(C) + C.khoangCach(A);
}

float cTamGiac::tinhDienTich() {
    float a = B.khoangCach(C);
    float b = A.khoangCach(C);
    float c = A.khoangCach(B);
    float p = tinhChuVi() / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

string cTamGiac::kiemTraLoai() {
    float a = B.khoangCach(C);
    float b = A.khoangCach(C);
    float c = A.khoangCach(B);

    if (a + b <= c || a + c <= b || b + c <= a)
        return "Khong phai tam giac";

    bool deu = (abs(a - b) < 1e-3 && abs(b - c) < 1e-3);
    bool can = (abs(a - b) < 1e-3 || abs(b - c) < 1e-3 || abs(a - c) < 1e-3);
    bool vuong = (abs(a*a + b*b - c*c) < 1e-2 ||
                  abs(a*a + c*c - b*b) < 1e-2 ||
                  abs(b*b + c*c - a*a) < 1e-2);

    if (deu) return "Tam giac deu";
    if (can && vuong) return "Tam giac vuong can";
    if (can) return "Tam giac can";
    if (vuong) return "Tam giac vuong";
    return "Tam giac thuong";
}

void cTamGiac::tinhTien(float dx, float dy) {
    A.tinhTien(dx, dy);
    B.tinhTien(dx, dy);
    C.tinhTien(dx, dy);
}

void cTamGiac::quay(float doGoc) {
    float rad = doGoc * PI / 180;
    A.quay(rad);
    B.quay(rad);
    C.quay(rad);
}

void cTamGiac::bienDoiKichThuoc(float k) {
    float gx = (A.getX() + B.getX() + C.getX()) / 3;
    float gy = (A.getY() + B.getY() + C.getY()) / 3;

    A.setX(gx + k * (A.getX() - gx));
    A.setY(gy + k * (A.getY() - gy));
    B.setX(gx + k * (B.getX() - gx));
    B.setY(gy + k * (B.getY() - gy));
    C.setX(gx + k * (C.getX() - gx));
    C.setY(gy + k * (C.getY() - gy));
}
