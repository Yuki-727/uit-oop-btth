#include <iostream>
#include "Time.h"
using namespace std;

int main() {
    Time t;
    
    cout << "Nhap thoi gian (h m s): ";
    t.Nhap();
    
    cout << "Thoi gian da nhap: ";
    t.Xuat();
    
    cout << "\nCong them 1 giay:" << endl;
    t.TinhCongThemMotGiay();
    cout << "Thoi gian sau: ";
    t.Xuat();
    
    return 0;
}
