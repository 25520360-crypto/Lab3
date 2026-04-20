#include "cDaThuc.h"
#include <iostream>
#include <cmath>
using namespace std;

cDaThuc::cDaThuc() : bac(0), heSo(1, 0.0) {}
cDaThuc::cDaThuc(int bac) : bac(bac), heSo(bac+1, 0.0) {}
cDaThuc::~cDaThuc() {}

void cDaThuc::nhap() {
    cout << "Nhap bac da thuc: "; cin >> bac;
    heSo.resize(bac+1);
    for (int i = bac; i >= 0; i--) {
        cout << "He so cua x^" << i << ": ";
        cin >> heSo[i];
    }
}

void cDaThuc::xuat() {
    bool first = true;
    for (int i = bac; i >= 0; i--) {
        if (heSo[i] == 0) continue;
        if (!first && heSo[i] > 0) cout << " + ";
        else if (heSo[i] < 0) cout << " - ";
        double coef = fabs(heSo[i]);
        if (i == 0) cout << coef;
        else if (coef != 1) cout << coef;
        if (i > 0) cout << "x";
        if (i > 1) cout << "^" << i;
        first = false;
    }
    if (first) cout << "0";
    cout << endl;
}

double cDaThuc::tinhGiaTri(double x) {
    double result = 0;
    for (int i = 0; i <= bac; i++)
        result += heSo[i] * pow(x, i);
    return result;
}

cDaThuc cDaThuc::cong(const cDaThuc& other) {
    int newBac = max(bac, other.bac);
    cDaThuc result(newBac);
    for (int i = 0; i <= newBac; i++) {
        double a = (i <= bac) ? heSo[i] : 0;
        double b = (i <= other.bac) ? other.heSo[i] : 0;
        result.heSo[i] = a + b;
    }
    return result;
}

cDaThuc cDaThuc::tru(const cDaThuc& other) {
    int newBac = max(bac, other.bac);
    cDaThuc result(newBac);
    for (int i = 0; i <= newBac; i++) {
        double a = (i <= bac) ? heSo[i] : 0;
        double b = (i <= other.bac) ? other.heSo[i] : 0;
        result.heSo[i] = a - b;
    }
    return result;
}
