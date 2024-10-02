#include <iostream>
using namespace std;

// Global variable
int globalVar = 10;

void functionA() {
    int localVarA = 20;  // Local variable in functionA
    cout << "Inside functionA - localVarA: " << localVarA << endl;
    cout << "Inside functionA - globalVar: " << globalVar << endl;  // Can access globalVar
}

void functionB() {
    int localVarB = 30;  // Local variable in functionB
    cout << "Inside functionB - localVarB: " << localVarB << endl;
    cout << "Inside functionB - globalVar: " << globalVar << endl;  // Can access globalVar
}

int main() {
    int localVarMain = 40;  // Local variable in main
    cout << "Inside main - localVarMain: " << localVarMain << endl;
    cout << "Inside main - globalVar: " << globalVar << endl;  // Can access globalVar
    
    // Access local variables from functions
    functionA();
    functionB();

    // Global variable can be modified anywhere
    globalVar = 50;
    cout << "Modified globalVar in main: " << globalVar << endl;

    return 0;
}