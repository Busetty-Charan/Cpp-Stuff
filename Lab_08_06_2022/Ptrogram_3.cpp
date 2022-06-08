#include<iostream>

using namespace std;

class celsius;
class Fahrenheit;

class Celsius
{
public:
float celsi;

Celsius()
{
    celsi = 0;
}

Celsius(float cel)
{
    celsi = cel;
}

void inputTemp()
{
    cout << "\nEnter temperature in celsius: ";
    cin >> celsi;
}

void dispTemp()
{
    cout << "\nTemperature in celsius is: " << celsi;
}

static double convToFar(double &cels)
{
    return (cels * ((double)9 / (double)5)) + 32;
}
};

class Fahrenheit
{

public:
float faren;

Fahrenheit()
{
    faren = 0;
}

Fahrenheit(float far)
{
    faren = far;
}

void getTemp()
{
    cout << "\nEnter temperature in fahrenheit: ";
    cin >> faren;
}

void showTemp()
{
    cout << "\nTemperature in fahrenheit is: " << faren;
}

static double convToCels(double *far)
{
    return (*far - 32) * ((double)5 / (double)9);
}
};

int main()
{
    double cels = 500;
    double far = 200;
    
    cout << "Celcius to Farenheit : " << Celsius::convToFar(cels) << endl;
    cout << "Farenheit to Celsius : " << Fahrenheit::convToCels(&far) << endl;
    
    return 0;
}