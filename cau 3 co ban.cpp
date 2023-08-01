#include <iostream>
using namespace std;

int giaithua(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * giaithua(n - 1);
}

int main() {
    int n;

    cout << "Nhap n (n > 1): ";
    cin >> n;

    if (n <= 1) {
        cout << "n phai la so nguyen duong va lon hon 1." << endl;
        return 1;
    }

    int result = giaithua(n);
    cout << n << "! = " << result << endl;

    return 0;
}

