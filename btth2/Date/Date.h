#ifndef DATE_H
#define DATE_H

class Date {
private:
    int d, m, y;

public:
    void Nhap();
    void Xuat();
    bool isLeapYear();
    int daysInMonth();
    void NgayThangNamTiepTheo();
};

#endif
