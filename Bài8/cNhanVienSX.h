#ifndef CNHANVIENSX_H
#define CNHANVIENSX_H
#include <string>

struct NgaySinh {
    int ngay, thang, nam;
};

class cNhanVienSX {
private:
    std::string maNV;
    std::string hoTen;
    NgaySinh ngaySinh;
    int soSanPham;
    double donGia;
public:
    cNhanVienSX();
    cNhanVienSX(std::string maNV, std::string hoTen, NgaySinh ns, int sp, double dg);
    std::string getMaNV() const;
    std::string getHoTen() const;
    NgaySinh getNgaySinh() const;
    int getSoSanPham() const;
    double getDonGia() const;
    void setMaNV(std::string maNV);
    void setHoTen(std::string hoTen);
    void setNgaySinh(NgaySinh ns);
    void setSoSanPham(int sp);
    void setDonGia(double dg);
    void nhap();
    void xuat() const;
    double tinhLuong() const;
    int tinhTuoi(int namHienTai = 2026) const;
};

#endif
