#include <iostream>

using namespace std;

class TIME
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    TIME()
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }

    TIME(int hrs, int mins, int secs)
    {
        hours = hrs;
        minutes = mins;
        seconds = secs;
    }

    void display()
    {
        cout << hours << ":" << minutes << ":" << seconds;
    }

    TIME addTIME(const TIME &twoime)
    {
        int hrs = hours + twoime.hours;
        int mins = minutes + twoime.minutes;
        int secs = seconds + twoime.seconds;

        if (secs > 59)
        {
            secs -= 60;
            mins += 1;
        }

        if (mins > 59)
        {
            mins -= 60;
            hrs += 1;
        }

        if (hrs > 24)
        {
            hrs -= 24;
        }

        return TIME(hrs, mins, secs);
    }
};

int main(int argc, char const *argv[])
{
    TIME t1(12, 34, 55), t2(13, 55, 59), result;

    result = t1.addTIME(t2);

    cout << "Time : ";

    result.display();

    cout << endl;

    return 0;
}
