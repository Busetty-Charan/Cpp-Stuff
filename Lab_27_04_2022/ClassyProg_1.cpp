#include <iostream>
#include <iomanip>

using namespace std;

class Date
{
    private:

        short int date;
        short int month;
        short int year;

    public:

        Date()
        {
            date = 01;
            month = 01;
            year = 2000;
        }

        Date(int a_date, int a_month, int a_year)
        {
            date = a_date;
            month = a_month;
            year = a_year;
        }

        void display();
};

void Date::display()
{
    cout << setw(2) << setfill('0') << right << date;
    cout << "/";
    cout << setw(2) << setfill('0') << right << month;
    cout << "/";
    cout << setw(4) << setfill('0') << right << year;
}

int main()
{
    Date date_default, date(30, 12, 2003);

    date_default.display();
    
    cout << endl;

    date.display();

    cout << endl;
    
    return 0;
}