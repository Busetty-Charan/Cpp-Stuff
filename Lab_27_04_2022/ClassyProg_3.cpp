#include <iostream>

using namespace std;

class Complex
{
private:
    double real;
    double imaginary;

public:
    Complex()
    {
        real = 0;
        imaginary = 0;
    }

    Complex(double real_part, double imaginary_part)
    {
        real = real_part;
        imaginary = imaginary_part;
    }

    double getReal()
    {
        return real;
    }

    double getImaginary()
    {
        return imaginary;
    }

    Complex operator+(const Complex &operand)
    {
        return Complex(real + operand.real, imaginary + operand.imaginary);
    }

    Complex operator-(const Complex &operand)
    {
        return Complex(real - operand.real, imaginary - operand.imaginary);
    }

    Complex operator*(const Complex &operand)
    {
        return Complex((real * operand.real) - (imaginary * operand.imaginary), (real * operand.imaginary) + (imaginary * operand.real));
    }
};

std::ostream &operator<<(std::ostream &os, Complex &obj)
{
    return os << obj.getReal() << " + (" << obj.getImaginary() << ") i";
}

int main(int argc, char const *argv[])
{
    Complex operand_1(3, 4), operand_2(7, -13), result;

    result = operand_1 + operand_2;

    cout << "Complex addition: " << result << endl;

    result = operand_1 - operand_2;

    cout << "Complex Subtraction: " << result << endl;

    result = operand_1 * operand_2;

    cout << "Complex Multiplication: " << result << endl;

    return 0;
}
