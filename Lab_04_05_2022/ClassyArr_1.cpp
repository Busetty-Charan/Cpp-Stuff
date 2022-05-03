#include <iostream>
#include <iomanip>

using namespace std;

class Employee
{
private:
    string Name;
    long Emp_No;

public:
    static short unsigned int put_calls;

    void getData(string, long);
    void putData();
};

void Employee::getData(string peru, long Reg)
{
    Name = peru;
    Emp_No = Reg;
}

void Employee::putData()
{
    cout << setw(2) << setfill('0') << setiosflags(ios::right) << put_calls + 1 << " Name: " << Name << "\tEmp.No: " << Emp_No;
    cout << endl;

    put_calls += 1;
}

short unsigned int Employee::put_calls = 0;

int main(int argc, char const *argv[])
{
    int n;

    cout << setiosflags(ios::left) << "How many employee details would you like to enter? [Max 10] : " << endl;
    cin >> n;

    if (n > 0 && n < 11)
    {

        Employee emparror[n];

        for (int i = 0; i < n; i++)
        {
            string Name;
            long Reg;

            cout << "Enter name for Employee " << i + 1 << " : ";
            cin >> Name;

            cout << "Enter the number for Employee " << i + 1 << " : ";
            cin >> Reg;

            emparror[i].getData(Name, Reg);
        }

        cout << endl
             << endl
             << "--- DETAILS ---" << endl;

        for (int i = 0; i < n; i++)
        {
            emparror[i].putData();
        }
    }

    return 0;
}
