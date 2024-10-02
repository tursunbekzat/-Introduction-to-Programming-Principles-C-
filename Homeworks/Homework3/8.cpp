#include <iostream>
using namespace std;

void normalVar() {
    int a = 0;  // Normal variable
    a++;
    cout << "Normal variable a: " << a << endl;
}

void staticVar() {
    static int b = 0;  // Static variable
    b++;
    cout << "Static variable b: " << b << endl;
}

int main() {
    // Calling normalVar multiple times
    for (int i = 0; i < 3; i++) {
        normalVar();
    }

    // Calling staticVar multiple times
    for (int i = 0; i < 3; i++) {
        staticVar();
    }

    return 0;
}
