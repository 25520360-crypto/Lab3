#include <iostream>
#include "cArray.h"
using namespace std;

int main() {
    cArray a;
    int n;
    cout << "Nhap so phan tu n: "; cin >> n;
    a.taoMangNgauNhien(n);
    cout << "Mang ngau nhien: "; a.xuat();
    int x;
    cout << "Nhap x de dem: "; cin >> x;
    cout << "So lan xuat hien cua " << x << ": " << a.demSoLanXuatHien(x) << endl;
    cout << "Mang tang dan: " << (a.kiemTraTangDan() ? "Co" : "Khong") << endl;
    cout << "So le lon nhat: " << a.timPhanLeLonNhat() << endl;
    cout << "So nguyen to lon nhat: " << a.timSoNguyenToLonNhat() << endl;
    a.sapXepTangDan();
    cout << "Sau khi sap xep tang dan: "; a.xuat();
    a.sapXepGiamDan();
    cout << "Sau khi sap xep giam dan: "; a.xuat();
    return 0;
}
