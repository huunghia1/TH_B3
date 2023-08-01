#include <iostream>
using namespace std;

int main() {
    int so1, so2, so3;
    cout << "nhap so 1: ";cin >> so1;
    cout << "nhap so 2 : ";cin >> so2;
    int sonhonhattrong2so = min(so1, so2);
    cout << "so nho nhat trong 2 so la: " << sonhonhattrong2so << endl;
    cout << "nhap so 3: ";cin >> so3;
    int sonhonhattrong3so = min(min(so1, so2), so3);
    cout << "so nho nhat trong 3 so la: " << sonhonhattrong3so << endl;
    return 0;
}
