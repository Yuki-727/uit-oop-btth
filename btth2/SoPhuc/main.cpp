#include <iostream>
#include "SoPhuc.h"
using namespace std;

int main() {
    SoPhuc a, b, kq;
    
    cout << "Nhap so phuc thu nhat (phan thuc, phan ao): ";
    a.Nhap();
    
    cout << "Nhap so phuc thu hai (phan thuc, phan ao): ";
    b.Nhap();
    
    cout << "So phuc thu nhat: ";
    a.Xuat();
    
    cout << "So phuc thu hai: ";
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
    
    return 0;
}
