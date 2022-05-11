#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string one, two;

    cin >> one >> two;

    if (one == two)
    {
        cout << "Equal";
    }
    else
    {
        cout << "Not equal";
    }

    return 0;
}
