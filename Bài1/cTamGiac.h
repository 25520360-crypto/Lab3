#ifndef CTAMGIAC_H
#define CTAMGIAC_H

#include "cDiem.h"
#include <string>

class cTamGiac {
private:
    cDiem A, B, C;
public:
    cTamGiac();
    ~cTamGiac();

    void nhap();
    void xuat();
    float tinhChuVi();
    float tinhDienTich();
    std::string kiemTraLoai();
    void tinhTien(float dx, float dy);
    void quay(float doGoc);
    void bienDoiKichThuoc(float k);
};

#endif
