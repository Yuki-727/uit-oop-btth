#include <iostream>
#include "SoPhuc.h"
using namespace std;

void SoPhuc::Nhap() {
    cin >> thuc >> ao;
}

void SoPhuc::Xuat() {
    cout << thuc << " + " << ao << "i" << endl;
}

SoPhuc SoPhuc::Tong(SoPhuc b) {
    SoPhuc kq;
    kq.thuc = thuc + b.thuc;
    kq.ao = ao + b.ao;
    return kq;
}

SoPhuc SoPhuc::Hieu(SoPhuc b) {
    SoPhuc kq;
    kq.thuc = thuc - b.thuc;
    kq.ao = ao - b.ao;
    return kq;
}

SoPhuc SoPhuc::Tich(SoPhuc b) {
    SoPhuc kq;
    kq.thuc = thuc * b.thuc - ao * b.ao;
    kq.ao = thuc * b.ao + ao * b.thuc;
    return kq;
}

SoPhuc SoPhuc::Thuong(SoPhuc b) {
    SoPhuc kq;
    double mau = b.thuc * b.thuc + b.ao * b.ao;
    kq.thuc = (thuc * b.thuc + ao * b.ao) / mau;
    kq.ao = (ao * b.thuc - thuc * b.ao) / mau;
    return kq;
}
