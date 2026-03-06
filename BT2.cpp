#include <iostream>
using namespace std;

int main() {
    float tu1, mau1, tu2, mau2;

    cout << "Nhap tu so va mau so dau tien: ";
    cin >> tu1 >> mau1;
    cout << "\nNhap tu so va mau so thu 2: ";
    cin >> tu2 >> mau2;

    if (tu1/mau1 == tu2/mau2) { cout << "Hai phan so bang nhau"; }
    else if (tu1/mau1 > tu2/mau2) { cout << "Phan so "<< tu1 <<"/"<< mau1 << " lon hon"; }
    else { cout << "Phan so "<< tu2 <<"/"<< mau2 << " lon hon"; }

    return 0;
}