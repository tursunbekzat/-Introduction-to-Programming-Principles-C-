#include <iostream>

using namespace std;

int main()
{
    int x = 1, y = 2;
    std::cout << "1.please figure out difference in between x++ vs ++x , note : x is int";
    cout << x++ << " " << ++x << endl;
    cout << y-- << " " << --y << endl;
    std::cout << "2. please figure out x = x+y vs x += y, note : x,y are int";
    x = x + y;
    y += x;
    cout <<  x << " " << y << endl;
    std::cout << "3. please figure out x = x-y vs x -= y, note : x,y are int";
    x = x - y; 
    y -= x;
    cout <<  x << " " << y << endl;
    std::cout << "3. please figure out x = x * y vs  x *= y, note : x,y are float";
    x = x * y;
    y *= x;
    cout <<  x << " " << y << endl;
    std::cout << "3. please figure out x = x / y vs  x /= y, note : x,y are float";
    x = x / y;
    y /= x;
    cout <<  x << " " << y << endl;

    return 0;
}