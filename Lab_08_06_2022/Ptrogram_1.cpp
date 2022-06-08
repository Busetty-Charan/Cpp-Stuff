#include <iostream>

using namespace std;

void cpstr(char *dest, char *src)
{
    for (int i = 0; *(src + i) != '\0' && *(dest + i) != '\0'; i++)
    {
        *(dest + i) = *(src + i);
    }
}

int main()
{
    char x[10] = "Applemann", y[7] = "Nanabi";

    cpstr(y, x);

    cout << y << endl;
    
    return 0;
}