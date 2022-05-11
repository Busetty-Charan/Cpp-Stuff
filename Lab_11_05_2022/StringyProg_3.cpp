#include <iostream>

using namespace std;

class STUD
{
private:
    string first_name;
    string last_name;
    string DOB;

public:
    void getDetails()
    {
        getline(cin, first_name, ',');
        getline(cin, last_name, ',');
        getline(cin, DOB);
    }

    void printDetails()
    {
        cout << endl;
        cout << first_name << '\t' << last_name << '\t' << DOB;
    }
};

int main(int argc, char const *argv[])
{
    int n;

    cout << "How many students ? ";
    cin >> n;

    STUD students[n];

    for (int i = 0; i < n; i++)
    {
        students[i].getDetails();
    }

    cout << "FN" << '\t' << "LN" << '\t' << "DOB";

    for (int i = 0; i < n; i++)
    {
        students[i].printDetails();
    }

    return 0;
}
