#include <iostream>

using namespace std;

class Date
{
private:
    short int day;
    short int month;
    short int year;

public:
    void setParams(int d, int m, int y);
    int getParam(char p);
    static bool validateDate(Date &obj);
};

void Date::setParams(int d, int m, int y)
{
    day = d;
    month = m;
    year = y;
}

int Date::getParam(char p)
{
    if (p == 'd')
    {
        return day;
    }

    if (p == 'm')
    {
        return month;
    }

    if (p == 'y')
    {
        return year;
    }

    return 0;
}

bool Date::validateDate(Date &obj)
{
    if (obj.getParam('d') < 1 ||
        (obj.getParam('d') > 30 && ((obj.getParam('m') % 2 == 0) && obj.getParam('m') != 2)) ||
        (obj.getParam('d') > 31 && ((obj.getParam('m') % 2 != 0) || obj.getParam('m') == 8)) ||
        ((obj.getParam('d') > 28 && ((obj.getParam('m') == 2 && obj.getParam('y') / 4 != 0))) || (obj.getParam('d') > 29 && (obj.getParam('m') == 2 && (obj.getParam('y') / 4 == 0)))))
    {
        return false;
    }

    return true;
}

int main(int argc, char const *argv[])
{
    int n;

    cout << "How many dates would you like to test? : ";
    cin >> n;

    Date datarr[n];

    for (int i = 0; i < n; i++)
    {
        int d, m, y;

        cout << "Enter the Day, Date and Year separated by a space -> Count : " << i + 1 << " => " << endl;
        cin >> d >> m >> y;

        datarr[i].setParams(d, m, y);
    }

    for (int i = 0; i < n; i++)
    {
        bool res;

        res = Date::validateDate(datarr[i]);

        if (res == true)
        {
            cout << "The date is valid" << endl;
        }
        else
        {
            cout << "The date is invalid" << endl;
        }
    }

    return 0;
}
