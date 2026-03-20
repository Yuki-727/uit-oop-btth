#ifndef PHANSO_H
#define PHANSO_H

class PhanSo {
private:
    int tu, mau;

public:
    void Nhap();
    void Xuat();
    int gcd(int a, int b);
    void RutGon();
    PhanSo Tong(PhanSo b);
    PhanSo Hieu(PhanSo b);
    PhanSo Tich(PhanSo b);
    PhanSo Thuong(PhanSo b);
    bool SoSanh(PhanSo b);
};

#endif
