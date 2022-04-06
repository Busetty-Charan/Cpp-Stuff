#include <iostream>
#include <iomanip>

using namespace std;

int absolute(int val)
{
    return (val >= 0) ? val : -val;
}

float absolute(float val)
{
    return (val >= 0) ? val : -val;
}

double absolute(double val)
{
    return (val >= 0) ? val : -val;
}

int main()
{
    int int_val = -200;
    double dob_val = -345.76651231;
    float flo_val = -214.09457;

    cout << "The absolute value of int : " << absolute(int_val) << endl;
    cout << setprecision(16) << "The absolute value of double : " << absolute(dob_val) << endl;
    cout << setprecision(8) << "The absolute value of float : " << absolute(flo_val) << endl;
    
    return 0;
}