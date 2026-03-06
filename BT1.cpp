#include <iostream>
using namespace std;

//tim uoc chung lon nhat
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int tu, mau;

    cout << "Nhap tu so va mau so: ";
    cin >> tu >> mau;

    int uocchung = gcd(tu, mau);

    cout << "phan so sau rut gon: " << tu / uocchung << "/" << mau / uocchung << endl;

    return 0;
}