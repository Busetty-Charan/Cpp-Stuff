#include <fstream>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{
    char symbol;
    fstream fead;
    fstream frite;

    fead.open("lowercase.txt", ios::in);
    frite.open("UPPERCASE.txt", ios::out);

    if (!fead || !frite)
    {
        return -1;
    }

    while (!fead.eof())
    {
        fead.get(symbol);
        frite << (char)toupper(symbol);
    }

    fead.close();
    frite.close();

    return 0;
}
