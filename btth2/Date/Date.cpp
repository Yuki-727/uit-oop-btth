#include <iostream>
#include "Date.h"
using namespace std;

void Date::Nhap() {
    cin >> d >> m >> y;
}

void Date::Xuat() {
    cout << d << "/" << m << "/" << y << endl;
}

bool Date::isLeapYear() {
    return (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0));
}

int Date::daysInMonth() {
    switch (m) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: return 31;
        case 4: case 6: case 9: case 11: return 30;
        case 2: return isLeapYear() ? 29 : 28;
    }
    return 30;
}

void Date::NgayThangNamTiepTheo() {
    d++;
    if (d > daysInMonth()) {
        d = 1;
        m++;
        if (m > 12) {
            m = 1;
            y++;
        }
    }
}
