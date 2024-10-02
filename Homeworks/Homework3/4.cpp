#include <iostream>
#include <math.h>

using namespace std;

float some_function(int x, float y, short z)
{
    return (pow(x, 2) + 2 * sqrt(y) - 3 * z / x);
}

int main()
{
    int x = 1;
    float y = 2.3;
    short z = 4;
    float answer = some_function(x, y, z);
    cout << "answer is = " << answer << "\n";
    return 0;
}