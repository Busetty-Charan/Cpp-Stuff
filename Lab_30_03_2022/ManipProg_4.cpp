#include <iostream>

using namespace std;

int main()
{
    int choice = 0;

    do
    {
        int age;

        cout << left << "Enter your age : ";
        cin >> age;

        if (age >= 18)
        {
            cout << left << "You are eligible for voting" << endl;
        }
        else
        {
            cout << left << "You are not eligible for voting" << endl;
        }

        cout << left << "Enter 1 to continue / Enter any other value to exit ";
        cin >> choice;
    }while(choice == 1);
    
    return 0;
}