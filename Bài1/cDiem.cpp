#include "cDiem.h"
#include <iostream>
#include <cmath>

using namespace std;

cDiem::cDiem(float x, float y) : x(x), y(y) {}

void cDiem::nhap() {
    cout << "Nhap x, y: ";
    cin >> x >> y;
}

void cDiem::xuat() {
    cout << "(" << x << ", " << y << ")";
}

void cDiem::tinhTien(float dx, float dy) {
    x += dx;
    y += dy;
}

void cDiem::quay(float gocRad) {
    float xMoi = x * cos(gocRad) - y * sin(gocRad);
    float yMoi = x * sin(gocRad) + y * cos(gocRad);
    x = xMoi;
    y = yMoi;
}

float cDiem::getX() { return x; }
float cDiem::getY() { return y; }
void cDiem::setX(float val) { x = val; }
void cDiem::setY(float val) { y = val; }

float cDiem::khoangCach(cDiem khac) {
    return sqrt(pow(x - khac.x, 2) + pow(y - khac.y, 2));
}
