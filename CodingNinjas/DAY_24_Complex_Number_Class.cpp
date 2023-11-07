Problem Statement
Send feedback
A ComplexNumber class contains two data members: one is the real part (R)
and the other is imaginary (l) (both integers).
Implement the Complex numbers class that contains the following functions -
1. constructor
You need to create the appropriate constructor.
2. plus -
This function adds two given complex numbers and updates the first complex
number.
e.g.
if Cl = 4 + i5 and C2 = 3 +il
Cl.p1us(C2) results in:
7 + i6 and C2 -
3. multiply -
This function multiplies two given complex numbers and updates the first
complex number.
e.g.
if Cl = 4 + i5 and C2 = 1 + i2
Cl.mu1tip1y(C2) results in:
-6 + i13 and C2 = 1 + i2
4. print -
This function prints the given complex number in the following format :
a + ib
Note: There is space before and after '+' (plus sign) and no space between 'i'
(iota symbol) and b.

Answer:
#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

class ComplexNumbers {
    private:
    int real;
    int imaginary;

public:
    ComplexNumbers(int r, int i) : real(r), imaginary(i) {}

    void plus(const ComplexNumbers &other) {
        real += other.real;
        imaginary += other.imaginary;
    }

    void multiply(const ComplexNumbers &other) {
        int new_real = real * other.real - imaginary * other.imaginary;
        int new_imaginary = real * other.imaginary + imaginary * other.real;
        real = new_real;
        imaginary = new_imaginary;
    }

    void print() const {
        cout << real << " + i" << imaginary << endl;
    }

};

int main() {
    int real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;
    cin >> choice;

    if (choice == 1) {
        c1.plus(c2);
        c1.print();
    } else if (choice == 2) {
        c1.multiply(c2);
        c1.print();
    } else {
        return 0;
    }

}
