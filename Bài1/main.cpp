#include <iostream>
#include "cTamGiac.h"
using namespace std;

int main() {
    cTamGiac tg;
    cout << "Nhap tam giac:\n";
    tg.nhap();
    cout << "\nThong tin ban dau:\n";
    tg.xuat();
    cout << "Loai: " << tg.kiemTraLoai() << endl;
    cout << "Chu vi: " << tg.tinhChuVi() << endl;
    cout << "Dien tich: " << tg.tinhDienTich() << endl;
    float dx, dy;
    cout << "Nhap do doi tinh tien (dx dy): ";
    cin >> dx >> dy;
    tg.tinhTien(dx, dy);
    float goc;
    cout << "Nhap goc quay (do): ";
    cin >> goc;
    tg.quay(goc);
    float k;
    cout << "Nhap he so k: ";
    cin >> k;
    if (k > 0) tg.bienDoiKichThuoc(k);
    tg.xuat();
    cout << "Dien tich moi: " << tg.tinhDienTich() << endl;
    return 0;
}
