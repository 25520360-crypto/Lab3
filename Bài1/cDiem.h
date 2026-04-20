#ifndef CDIEM_H
#define CDIEM_H

class cDiem {
private:
    float x, y;
public:
    cDiem(float x = 0, float y = 0);
    void nhap();
    void xuat();
    void tinhTien(float dx, float dy);
    void quay(float gocRad);

    float getX();
    float getY();
    void setX(float val);
    void setY(float val);
    float khoangCach(cDiem khac);
};

#endif
