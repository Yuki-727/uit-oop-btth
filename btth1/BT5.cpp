#include <iostream>
using namespace std;

int main() {
    string ten;
    cout << "Nhap ten: " << endl;
    getline(cin, ten);

    float toan, van;
    cout << "Nhap diem toan va van: ";
    cin >> toan >> van;
                                                //diem trung binh
    cout << ten << " co diem trung binh la " << (toan + van)/(2.0) << endl;
    return 0;
}