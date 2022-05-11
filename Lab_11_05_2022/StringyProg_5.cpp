#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string starray[] = {"Orange", "Pineapple", "Chestnut", "Apple"};

    int switches = 0;

    do
    {
        switches = 0;

        for (int i = 0; i < 3; i++)
        {
            if (starray[i].compare(starray[i + 1]) > 0)
            {
                string temp = starray[i + 1];
                starray[i + 1] = starray[i];
                starray[i] = temp;

                switches++;
            }
        }
    } while (switches);

    cout << "[ ";

    for (int i = 0; i < 4; i++)
    {
        cout << starray[i] << ", ";
    }

    cout << "\b\b ]" << endl;

    return 0;
}
