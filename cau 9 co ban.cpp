#include <iostream>
using namespace std;

int Daokiso(int number) {
    int reversedNum = 0;
    while (number > 0) {
        int lastDigit = number % 10; 
        reversedNum = reversedNum * 10 + lastDigit; 
        number /= 10; 
    }
    return reversedNum;
}

int main() {
    int n;
    cout << "Nhap mot so nguyen duong n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Vui long nhap so nguyen duong lon hon 0." << endl;
        return 1;
    }

    int reversed_n = Daokiso(n);

    cout << "So sau khi dao vi tri cac ki so: " << reversed_n << endl;

    return 0;
}
