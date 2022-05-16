#include <iostream>
#include <stdlib.h>

using namespace std;

class String_manip
{
private:
    char *strarr;
    string inarr;

public:
    String_manip(string &input)
    {
        inarr = input;
    }

    char *slice(int start, int end, int jump);
};

char *String_manip::slice(int start, int end, int jump = 1)
{
    int strle = inarr.length();
    int count = 0;
    strarr = (char *)calloc(1, sizeof(char));

    for (int i = start; inarr[i] != '\0';)
    {
        strarr = (char *)realloc(strarr, (count + 2) * sizeof(char));
        *(strarr + count) = inarr[i];
        i += jump;

        if (i > strle || i >= end - 1)
        {
            break;
        }

        count++;
    }

    *(strarr + count + 1) = '\0';

    return strarr;
}

int main()
{
    string in = "penpineappleapplepen";
    String_manip man(in);
    char *result;

    result = man.slice(0, 6, 2);

    cout << result;

    free(result);

    return 0;
}