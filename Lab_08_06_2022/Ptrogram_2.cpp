#include <iostream>

using namespace std;

int findInt(const int &search, const int *srcarror, const int &size)
{
    for (int i = 0; i < size; i++)
    {
        if (*(srcarror + i) == search)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int arror[5] = {1, 2, 2, 3, 5};

    cout << findInt(3, arror, 5) << endl;
    
    return 0;
}