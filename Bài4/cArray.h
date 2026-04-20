#ifndef CARRAY_H
#define CARRAY_H
#include <vector>

class cArray {
private:
    std::vector<int> arr;
    int n;
public:
    cArray();
    cArray(int n);
    ~cArray();
    void taoMangNgauNhien(int n, int minVal=-100, int maxVal=100);
    void xuat();
    int demSoLanXuatHien(int x);
    bool kiemTraTangDan();
    int timPhanLeLonNhat();
    int timSoNguyenToLonNhat();
    void sapXepTangDan();
    void sapXepGiamDan();
    int getN() { return n; }
};

#endif
