#include <iostream>

using namespace std;

int power(char N, int P = 2)
{
    for(int i = 0; i < P; i++)
    {
        cout << N;
    }

    return 0;
}

double power(double N, int P = 2)
{
    double result = 1;
    
    for(int i = 0; i < P; i++)
    {
        result *= N;
    }

    return result;
}

float power(float N, int P = 2)
{
    float result = 1;
    
    for(int i = 0; i < P; i++)
    {
        result *= N;
    }

    return result;
}

int power(int N, int P = 2)
{
    int result = 1;
    
    for(int i = 0; i < P; i++)
    {
        result *= N;
    }

    return result;
}

long power(long N, int P = 2)
{
    long result = 1;
    
    for(int i = 0; i < P; i++)
    {
        result *= N;
    }

    return result;
}

int main()
{
    double dob = 3.4745645123;
    char cha = 'F';
    int inint = 5;
    long looong = 123456;
    float flo = 1.2;
    
    cout << "power(dob, 5) => " << power(dob, 5) << endl;
    cout << "power(dob) => " << power(dob) << endl;
    cout << "power(inint, 4) => " << power(inint, 4) << endl;
    cout << "power(intint) => " << power(inint) << endl;
    cout << "power(looong, 3) => " << power(looong, 3) << endl;
    cout << "power(looong) => " << power(looong) << endl;
    cout << "power(flo, 5) => " << power(flo, 5) << endl;
    cout << "power(flo) => " << power(flo) << endl;
    cout << "power(cha, 22) => " << power(cha, 22) << "\b " << endl;
    cout << "power(cha) => " << power(cha) << "\b " << endl;
    
    return 0;
}