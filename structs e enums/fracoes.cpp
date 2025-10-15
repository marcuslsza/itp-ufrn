#include <iostream>
#include <string>
using namespace std;

struct Fracao {
    int numerador, denominador;
};

string multiply(Fracao frac1, Fracao frac2) {
    string num = to_string((frac1.numerador * frac2.numerador));
    string denom = to_string((frac1.denominador * frac2.denominador));
    return num + '/' + denom;  
    
}

int main(void) {
    cout << multiply(Fracao {3, 2}, Fracao {5, 4}); // 3/2 * 5/4 = 15/8 (output)
}