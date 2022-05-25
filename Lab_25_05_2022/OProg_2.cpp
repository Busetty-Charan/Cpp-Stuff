#include <iostream>
#include <string.h>

using namespace std;

class SCmp
{
    private:

        char cmpstring[20];

    public:

        SCmp(char string[])
        {
            strcpy(cmpstring, string);
        }

        char* gs()
        {
            return cmpstring;
        }

        bool operator ==(SCmp &S)
        {
            return strcmp(cmpstring, S.gs()) == 0 ? true : false;
        }
};

int main()
{
    char hm[] = "Apple";
    SCmp A(hm), B(hm);

    cout << (A == B) << endl;
    
    return 0;
}