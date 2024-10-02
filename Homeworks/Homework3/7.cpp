#include <iostream>
using namespace std;

// Global variable
int x = 100;

void someFunction() {
    int x = 10;  // Local variable in someFunction
    cout << "Inside someFunction - x: " << x << endl;
}

int main() {
    cout << "Global x: " << x << endl;  // Accessing global x

    // Local variable in main
    int x = 5;
    cout << "Local x in main: " << x << endl;

    if (true) {
        int x = 20;  // Block scope variable in if statement
        cout << "Block x inside if: " << x << endl;
    }

    someFunction();

    return 0;
}
