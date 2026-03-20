#include <iostream>
#include "Time.h"
using namespace std;

void Time::Nhap() {
    cin >> h >> m >> s;
}

void Time::Xuat() {
    cout << h << ":" << m << ":" << s << endl;
}

void Time::TinhCongThemMotGiay() {
    s++;
    if (s >= 60) {
        s = 0;
        m++;
        if (m >= 60) {
            m = 0;
            h++;
            if (h >= 24) h = 0;
        }
    }
}
