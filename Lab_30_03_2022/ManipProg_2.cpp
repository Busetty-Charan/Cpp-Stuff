#include <iostream>

using namespace std;

int main()
{
    int mincap, maxcap, inp;

    cout << left << "Enter the minimum cap : ";
    cin >> mincap;

    cout << left << "Enter the maximum cap : ";
    cin >> maxcap;

    cout << left << "Enter a value : ";
    cin >> inp;

    if (inp >= mincap && inp <= maxcap)
    {
        cout << left << "The given value is inside the range" << endl;
    }
    else
    {
        cout << left << "The given value is not inside the range" << endl;
    }

    return 0;
}