#include <iostream>
#include "cDaGiac.h"
using namespace std;

int main() {
    cDaGiac dg;
    dg.nhap();
    dg.xuat();
    cout << "Chu vi: " << dg.tinhChuVi() << endl;
    cout << "Dien tich: " << dg.tinhDienTich() << endl;
    cout << "La loi: " << (dg.laLoi() ? "Co" : "Khong") << endl;
    float dx, dy;
    cout << "Nhap do doi tinh tien (dx dy): ";
    cin >> dx >> dy;
    dg.tinhTien(dx, dy);
    float goc;
    cout << "Nhap goc quay (do): ";
    cin >> goc;
    dg.quay(goc);
    float k;
    cout << "Nhap he so k: ";
    cin >> k;
    if (k > 0) dg.bienDoiKichThuoc(k);
    cout << "Toa do sau bien doi:\n";
    dg.xuat();
    cout << "Dien tich moi: " << dg.tinhDienTich() << endl;
    return 0;
}
