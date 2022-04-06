#include <iostream>

using namespace std;

float compute(int radius = 1, int height = 2)
{
    return 3.14 * radius * radius * height;
}

int main()
{
    cout << "Volume of cylinder with radius = 5 and height = 8 : " << compute(5, 8) << endl;
    cout << "Volume of cylinder : " << compute() << endl;
    
    return 0;
}