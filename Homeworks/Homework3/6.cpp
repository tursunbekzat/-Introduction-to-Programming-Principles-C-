#include <iostream>
using namespace std;

int main() {
    // Implicit conversion (int to double)
    int a = 5;
    double b = a;  // Automatically converts 'a' to double
    cout << "Implicit conversion (int to double): " << b << endl;

    // Explicit conversion (double to int)
    double c = 9.8;
    int d = static_cast<int>(c);  // Manually casting 'c' to int
    cout << "Explicit conversion (double to int): " << d << endl;

    return 0;
}