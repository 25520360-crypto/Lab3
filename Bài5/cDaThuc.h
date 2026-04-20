#ifndef CDATHUC_H
#define CDATHUC_H
#include <vector>

class cDaThuc {
private:
    std::vector<double> heSo;
    int bac;
public:
    cDaThuc();
    cDaThuc(int bac);
    ~cDaThuc();
    void nhap();
    void xuat();
    double tinhGiaTri(double x);
    cDaThuc cong(const cDaThuc& other);
    cDaThuc tru(const cDaThuc& other);
    int getBac() const { return bac; }
};

#endif
