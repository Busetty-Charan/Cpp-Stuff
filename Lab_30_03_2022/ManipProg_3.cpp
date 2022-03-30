#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;

    cout << left << "Enter 'n' : ";
    cin >> n;

    cout << left << "The sum of 'n' numbers is : " <<\
        setw(10) << right << (n * (n + 1) / 2) << endl;
    
    return 0;
}