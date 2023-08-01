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

    cout << "uoc chung lon nhat " << a << " và " << b << " là: " << gcdResult <<endl;
    cout << "uoc chung nho nhat " << a << " và " << b << " là: " << lcmResult <<endl;

    return 0;
}
