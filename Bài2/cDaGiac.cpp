#include "cDaGiac.h"
#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.14159265358979323846

cDaGiac::cDaGiac() : n(0) {}
cDaGiac::cDaGiac(int n) : n(n), dinh(n) {}
cDaGiac::~cDaGiac() {}

void cDaGiac::nhap() {
    cout << "Nhap so dinh: ";
    cin >> n;
    dinh.resize(n);
    for (int i = 0; i < n; i++) {
        cout << "Dinh " << (i+1) << ": ";
        dinh[i].nhap();
    }
}

void cDaGiac::xuat() {
    cout << "Da giac " << n << " dinh: ";
    for (int i = 0; i < n; i++) {
        cout << "D" << (i+1);
        dinh[i].xuat();
        if (i < n-1) cout << ", ";
    }
    cout << endl;
}

float cDaGiac::tinhChuVi() {
    float cv = 0;
    for (int i = 0; i < n; i++)
        cv += dinh[i].khoangCach(dinh[(i+1)%n]);
    return cv;
}

float cDaGiac::tinhDienTich() {
    float s = 0;
    for (int i = 0; i < n; i++) {
        int j = (i+1) % n;
        s += dinh[i].getX() * dinh[j].getY();
        s -= dinh[j].getX() * dinh[i].getY();
    }
    return fabs(s) / 2.0f;
}

bool cDaGiac::laLoi() {
    if (n < 3) return false;
    int sign = 0;
    for (int i = 0; i < n; i++) {
        int j = (i+1)%n, k = (i+2)%n;
        float cross = (dinh[j].getX()-dinh[i].getX())*(dinh[k].getY()-dinh[j].getY())
                    - (dinh[j].getY()-dinh[i].getY())*(dinh[k].getX()-dinh[j].getX());
        if (cross != 0) {
            int s = (cross > 0) ? 1 : -1;
            if (sign == 0) sign = s;
            else if (sign != s) return false;
        }
    }
    return true;
}

void cDaGiac::tinhTien(float dx, float dy) {
    for (auto& d : dinh) d.tinhTien(dx, dy);
}

void cDaGiac::quay(float doGoc) {
    float rad = doGoc * PI / 180;
    for (auto& d : dinh) d.quay(rad);
}

void cDaGiac::bienDoiKichThuoc(float k) {
    float gx = 0, gy = 0;
    for (auto& d : dinh) { gx += d.getX(); gy += d.getY(); }
    gx /= n; gy /= n;
    for (auto& d : dinh) {
        d.setX(gx + k*(d.getX()-gx));
        d.setY(gy + k*(d.getY()-gy));
    }
}
