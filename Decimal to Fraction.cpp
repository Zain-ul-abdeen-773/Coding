#include <iostream>
#include <cmath>

using namespace std;

// Function to find the greatest common divisor using Euclid's algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to convert decimal to fraction
void decimalToFraction(double decimal, int &numerator, int &denominator) {
    const double precision = 1.0e-7; // Define the precision
    double integralPart; // Integer part of the decimal
    double fractionalPart = modf(decimal, &integralPart); // Split into integer and fractional parts

    denominator = 1;
    while (fabs(fractionalPart) > precision) {
        decimal *= 10;
        fractionalPart = modf(decimal, &integralPart);
        denominator *= 10;
    }
    numerator = static_cast<int>(round(decimal));

    // Simplify the fraction by dividing by the GCD
    int commonDivisor = gcd(abs(numerator), denominator);
    numerator /= commonDivisor;
    denominator /= commonDivisor;
}

int main() {
    double decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    int numerator, denominator;
    decimalToFraction(decimal, numerator, denominator);
    cout<<endl;
    
    cout << "Fraction: " << numerator << "/" << denominator << endl;

    return 0;
}
