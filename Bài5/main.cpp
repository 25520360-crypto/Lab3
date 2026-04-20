#include <iostream>
#include "cDaThuc.h"
using namespace std;

int main() {
    cDaThuc p1, p2;
    cout << "Nhap da thuc P1:\n";
    p1.nhap();
    cout << "P1 = "; p1.xuat();
    cout << "Nhap da thuc P2:\n";
    p2.nhap();
    cout << "P2 = "; p2.xuat();
    double x;
    cout << "Nhap x: "; cin >> x;
    cout << "P1(" << x << ") = " << p1.tinhGiaTri(x) << endl;
    cout << "P2(" << x << ") = " << p2.tinhGiaTri(x) << endl;
    cDaThuc sum = p1.cong(p2);
    cout << "P1 + P2 = "; sum.xuat();
    cDaThuc diff = p1.tru(p2);
    cout << "P1 - P2 = "; diff.xuat();
    return 0;
}
