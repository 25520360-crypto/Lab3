#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include "cNhanVienSX.h"
using namespace std;

int main() {
    int n;
    cout << "Nhap so nhan vien: "; cin >> n;
    vector<cNhanVienSX> ds(n);
    for (int i = 0; i < n; i++) {
        cout << "\nNhan vien " << (i+1) << ":\n";
        ds[i].nhap();
    }
    cout << "\nDanh sach nhan vien:\n";
    for (auto& nv : ds) nv.xuat();
    auto minIt = min_element(ds.begin(), ds.end(),
        [](const cNhanVienSX& a, const cNhanVienSX& b){
            return a.tinhLuong() < b.tinhLuong();
        });
    cout << "\nNV luong thap nhat: " << minIt->getHoTen()
         << " - " << minIt->tinhLuong() << endl;

    double tongLuong = 0;
    for (auto& nv : ds) tongLuong += nv.tinhLuong();
    cout << "Tong luong: " << tongLuong << endl;

    auto oldIt = max_element(ds.begin(), ds.end(),
        [](const cNhanVienSX& a, const cNhanVienSX& b){
            return a.tinhTuoi() < b.tinhTuoi();
        });
    cout << "NV tuoi cao nhat: " << oldIt->getHoTen()
         << " - " << oldIt->tinhTuoi() << " tuoi\n";

    sort(ds.begin(), ds.end(),
        [](const cNhanVienSX& a, const cNhanVienSX& b){
            return a.tinhLuong() < b.tinhLuong();
        });
    cout << "\nDanh sach luong tang dan:\n";
    for (auto& nv : ds) nv.xuat();
    return 0;
}
