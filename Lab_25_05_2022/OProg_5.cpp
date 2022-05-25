#include <iostream>
#include <math.h>

using namespace std;
 
class Complex
{
    private:
    
        double real;
        double imag;
     
    public:
       
        Complex(double r = 0.0, double i = 0.0):real(r), imag(i){}

        operator double()
        {
            return sqrt(pow(real, 2) + pow(imag, 2));
        }
};
 
int main()
{
    Complex com1(3.0, 3.0);
    double x;

    x = com1;

    cout << x;
    
    return 0;
}