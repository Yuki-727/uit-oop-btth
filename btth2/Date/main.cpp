#include <iostream>
#include "Date.h"
using namespace std;

int main() {
    Date d;
    
    cout << "Nhap ngay thang nam: ";
    d.Nhap();
    
    cout << "Ngay da nhap: ";
    d.Xuat();
    
    cout << "La nam nhuan? " << (d.isLeapYear() ? "Co" : "Khong") << endl;
    cout << "So ngay trong thang: " << d.daysInMonth() << endl;
    
    d.NgayThangNamTiepTheo();
    cout << "Ngay tiep theo: ";
    d.Xuat();
    
    return 0;
}
