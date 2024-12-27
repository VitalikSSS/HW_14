#include "Fraction.h"
#include <iostream>
using namespace std;
int main() {
    Fraction f1(5, 6);
    Fraction f2(7, 6);
    Fraction result = f1.add(f2);
    Fraction result1 = f1.devide(f2);
    Fraction result2 = f2.multiply(f2);
    Fraction result3 = f2.substract(f2);
    result.Cout();
    result1.Cout();
    result2.Cout();
    result3.Cout();
}