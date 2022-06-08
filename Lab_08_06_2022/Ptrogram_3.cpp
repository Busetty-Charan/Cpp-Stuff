#include<iostream>

using namespace std;

double convToFar(double &cels)
{
    return (cels * ((double)9 / (double)5)) + 32;
}

double convToCels(double *far)
{
    return (*far - 32) * ((double)5 / (double)9);
}

int main()
{
    double cels = 500;
    double far = 200;
    
    cout << "Celcius to Farenheit : " << convToFar(cels) << endl;
    cout << "Farenheit to Celsius : " << convToCels(&far) << endl;
    
    return 0;
}