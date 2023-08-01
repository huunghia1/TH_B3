#include <iostream>
using namespace std;
int gcd(int a, int b) 
{
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
int lcm(int a, int b) 
{
    return (a * b) / gcd(a, b);
}
int main() 
{
    int a, b;
    cout << "nhap a: ";cin >> a;
    cout << "nhap b: ";cin >> b;
    int gcdResult = gcd(a, b);
    int lcmResult = lcm(a, b);

    cout << "uoc chung lon nhat " << a << " v� " << b << " l�: " << gcdResult <<endl;
    cout << "uoc chung nho nhat " << a << " v� " << b << " l�: " << lcmResult <<endl;

    return 0;
}
