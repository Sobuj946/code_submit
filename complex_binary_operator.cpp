#include <bits/stdc++.h>
using namespace std;

class Complex {
    float real, imag;
public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    // Display function to show the result
    void display() {
        cout << real << " + " << imag << "i\n";
    }

    friend Complex operator +(Complex, Complex);
};

Complex operator +(Complex a, Complex b) {
    return Complex(a.real + b.real, a.imag + b.imag);
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    Complex a(2.3, 4.5), b(5.4, 6.3);
    Complex c3 = a + b;
    c3.display();

    return 0;
}
