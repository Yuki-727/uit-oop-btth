#include <iostream>
using namespace std;

//Tim uoc chung lon nhat
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

//Tim boi chung nho nhat
int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    int tu1, mau1, tu2, mau2;

    cout << "Nhap tu so va mau so dau tien: ";
    cin >> tu1 >> mau1;
    cout << "\nNhap tu so va mau so thu 2: ";
    cin >> tu2 >> mau2;

    int boichung = lcm(mau1, mau2);

    int mtu1, mtu2;
    mtu1 = tu1 * boichung / mau1;
    mtu2 = tu2 * boichung / mau2;

    cout << "Tong 2 phan so: " << mtu1 + mtu2 << "/" << boichung << endl;

    cout << "Hieu 2 phan so: " << mtu1 - mtu2 << "/" << boichung << endl;

    int uocchung = gcd(tu1 * tu2, mau1 * mau2);
    cout << "Tich 2 phan so: " << tu1 * tu2 / uocchung << "/" << mau1 * mau2 / uocchung << endl;

    uocchung = gcd(tu1 * mau2, mau1 * tu2);
    cout << "Thuong 2 phan so: " << tu1 * mau2 / uocchung << "/" << mau1 * tu2 / uocchung << endl;

    return 0;
}