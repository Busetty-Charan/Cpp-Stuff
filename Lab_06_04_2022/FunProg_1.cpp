#include <iostream>

using namespace std;

inline const int& cube(int number = 0)
{   
    return number * number * number;
}

int main()
{
    int num;

    cout << "Enter a number : ";
    cin >> num;

    cout << "The cube of the number is : " << cube(num) << endl;
    
    return 0;
}