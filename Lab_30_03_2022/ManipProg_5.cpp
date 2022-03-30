#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << left << "Enter a number : ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << left << "The entered number is even" << endl;
    }
    else
    {
        cout << left << "The entered number is odd" << endl;
    }
    
    return 0;
}