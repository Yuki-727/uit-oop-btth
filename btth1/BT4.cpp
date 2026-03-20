#include <iostream>
using namespace std;

//kiem tra nam nhuan
bool leap(int y) {
    return (y % 4 == 0 && y % 100 != 0) || y % 400 == 0;
}

//kiem tra ngay trong thang
int dayInMonth(int m, int y) {
    int d[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (m == 2 && leap(y)) {return 29;}
    return d[m - 1];
}

//kiem tra tinh hop le
bool valid(int d, int m, int y) {
    if (y < 1 || m < 1 || m > 12) return false;
    return d >= 1 && d <= dayInMonth(m, y);
}

//tim ngay ke tiep
void nextDay(int &d, int &m, int &y) {
    d++;
    if (d > dayInMonth(m, y)) {
        d = 1;
        m++;
        if (m > 12)
        {
            m = 1;
            y++;
        }
    }
}

int main() {

    int ngay, thang, nam;

    do {
        cout << "Nhap ngay, thang, nam hop le:" << endl;
        cin >> ngay >> thang >> nam;
    }
    while (!valid(ngay, thang, nam)); //neu ngay khong hop le thi nhap lai

    nextDay(ngay, thang, nam);
    cout << "Ngay ke tiep: " << ngay << "/" << thang << "/" << nam << endl;
    return 0;
}