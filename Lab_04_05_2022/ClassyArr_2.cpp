#include <iostream>

using namespace std;

class Distance
{
private:
    static unsigned int obj_count;
    double feet;
    double inches;

public:
    Distance()
    {
        feet = 0;
        inches = 0;
        obj_count++;
    }

    Distance(double &Feet, double &Inches)
    {
        feet = Feet;
        inches = Inches;
    }

    void setParams(double &Feet, double &Inches)
    {
        feet = Feet;
        inches = Inches;
    }
    static Distance avgDistance(const Distance objs[]);
    double getFeet()
    {
        return feet;
    }

    double getInches()
    {
        return inches;
    }
};

Distance Distance::avgDistance(const Distance objs[])
{
    double feet = 0, inches = 0;

    for (int i = 0; i < obj_count; i++)
    {
        inches += objs[i].inches;
        feet += objs[i].feet;

        if (inches > 11)
        {
            feet += (int)inches / 12;
            inches -= ((int)inches / 12) * 12;
        }
    }

    return Distance(feet, inches);
}

std::ostream &operator<<(std::ostream &os, Distance &obj)
{
    return os << obj.getFeet() << " Feet " << obj.getInches() << " Inches ";
}

unsigned int Distance::obj_count = 0;

int main(int argc, char const *argv[])
{
    int n;

    cout << "Enter the number of English distances you would like to enter : ";
    cin >> n;

    Distance disarray[n], avg;

    for (int i = 0; i < n; i++)
    {
        double feet, inches;

        cout << i << endl;
        cin >> feet;
        cin >> inches;

        disarray[i].setParams(feet, inches);
    }

    avg = Distance::avgDistance(disarray);

    cout << "The average distance is : " << avg;

    return 0;
}
