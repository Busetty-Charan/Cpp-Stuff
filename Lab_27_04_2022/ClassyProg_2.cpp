#include <iostream>

using namespace std;

class TollBooth
{
private:
    unsigned int car_count = 0;
    double amount_collected = 0;

public:
    TollBooth()
    {
        car_count = 0;
        amount_collected = 0;
    }

    void payingCar()
    {
        car_count += 1;
        amount_collected += 50;
    }

    void nonPayingCar()
    {
        car_count += 1;
    }

    void dispDetails() const
    {
        cout << "Total number of cars counted : " << car_count << endl;
        cout << "Total amount collected : " << amount_collected << endl;
    }
};

int main()
{
    TollBooth booth;
    short int choice = 0;

    do
    {
        cout << "Enter your choice [1, 2, 3]";
        cout << "Entering any other number will result in the program exiting" << endl;
        cout << "1. Paying Car" << endl;
        cout << "2. Non-Paying Car" << endl;
        cout << "3. Display Details" << endl;
        cout << " : ";

        cin >> choice;

        if (choice == 1)
        {
            booth.payingCar();
        }

        if (choice == 2)
        {
            booth.nonPayingCar();
        }

        if (choice == 3)
        {
            booth.dispDetails();
        }
    } while (choice == 1 || choice == 2 || choice == 3);

    return 0;
}
