#include <iostream>
#include "PhanSo.h"
using namespace std;

int main() {
    PhanSo a, b, kq;
    
    cout << "Nhap phan so thu nhat (tu, mau): ";
    a.Nhap();
    
    cout << "Nhap phan so thu hai (tu, mau): ";
    b.Nhap();
    
    cout << "Phan so thu nhat: ";
    a.Xuat();
    
    cout << "Phan so thu hai: ";
    b.Xuat();
    
    cout << "\n--- Cac phep toan ---" << endl;
    
    kq = a.Tong(b);
    cout << "Tong: ";
    kq.Xuat();
    
    kq = a.Hieu(b);
    cout << "Hieu: ";
    kq.Xuat();
    
    kq = a.Tich(b);
    cout << "Tich: ";
    kq.Xuat();
    
    kq = a.Thuong(b);
    cout << "Thuong: ";
    kq.Xuat();
    
    cout << "So sanh bang? " << (a.SoSanh(b) ? "Co" : "Khong") << endl;
    
    return 0;
}
