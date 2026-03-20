#include <iostream>
#include <cstdlib>
#include "PhanSo.h"
using namespace std;

void PhanSo::Nhap() {
    cin >> tu >> mau;
}

void PhanSo::Xuat() {
    cout << tu << "/" << mau << endl;
}

int PhanSo::gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

void PhanSo::RutGon() {
    int g = gcd(abs(tu), abs(mau));
    tu /= g;
    mau /= g;
}

PhanSo PhanSo::Tong(PhanSo b) {
    PhanSo kq;
    kq.tu = tu * b.mau + b.tu * mau;
    kq.mau = mau * b.mau;
    kq.RutGon();
    return kq;
}

PhanSo PhanSo::Hieu(PhanSo b) {
    PhanSo kq;
    kq.tu = tu * b.mau - b.tu * mau;
    kq.mau = mau * b.mau;
    kq.RutGon();
    return kq;
}

PhanSo PhanSo::Tich(PhanSo b) {
    PhanSo kq;
    kq.tu = tu * b.tu;
    kq.mau = mau * b.mau;
    kq.RutGon();
    return kq;
}

PhanSo PhanSo::Thuong(PhanSo b) {
    PhanSo kq;
    kq.tu = tu * b.mau;
    kq.mau = mau * b.tu;
    kq.RutGon();
    return kq;
}

bool PhanSo::SoSanh(PhanSo b) {
    return tu * b.mau == b.tu * mau;
}
