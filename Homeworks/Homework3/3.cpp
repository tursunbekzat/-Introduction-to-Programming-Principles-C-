// b=7 , a=2.5 ; c= 10

#include<iostream>
#include<math.h>

using namespace std;

float discriminant(float a, int b, int c){
    float x1 = ((-b) + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    float x2 = ((-b) + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    return x1, x2;
}

int main(){
    int b = 7, c = 10;
    float a = 2.5;
    float x1, x2 = discriminant(a, b, c);
    cout << "X1 = " << x1 << "\n" << "X2 = " << x2 << endl;
    return 0;
}