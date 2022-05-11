#include <iostream>
#include <stdlib.h>

using namespace std;

class Name
{
private:
    char *strarr;
    string inarr;

public:
    Name(string &input)
    {
        inarr = input;
    }

    char *erase(const char &erased);
};

char *Name::erase(const char &erased)
{
    int count = 0;
    strarr = (char *)calloc(1, sizeof(char));

    for (int i = 0; inarr[i] != '\0'; i++)
    {
        if (inarr[i] == erased)
        {
            continue;
        }

        strarr = (char *)realloc(strarr, (count + 2) * sizeof(char));
        *(strarr + count) = inarr[i];
        count++;
    }

    *(strarr + count + 1) = '\0';

    return strarr;
}

int main()
{
    string in = "penpineappleapplepen";
    Name peru(in);
    char *result;

    result = peru.erase('p');

    cout << result;

    return 0;
}
