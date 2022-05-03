#include <iostream>

using namespace std;

class HEIGHT
{
private:
    static unsigned int obj_count;
    double feet;
    double inches;

public:
    HEIGHT()
    {
        feet = 0;
        inches = 0;
        obj_count++;
    }

    HEIGHT(double &Feet, double &Inches)
    {
        feet = Feet;
        inches = Inches;
    }

    void setParams(double &Feet, double &Inches)
    {
        feet = Feet;
        inches = Inches;
    }
    static HEIGHT avgHeight(const HEIGHT objs[]);
    static HEIGHT minHeight(const HEIGHT objs[]);
    static HEIGHT maxHeight(const HEIGHT objs[]);
    double getFeet()
    {
        return feet;
    }

    double getInches()
    {
        return inches;
    }
};

HEIGHT HEIGHT::maxHeight(const HEIGHT objs[])
{
    double max_ft = 0, max_in = 0;

    for (int i = 0; i < obj_count; i++)
    {
        double feet = objs[i].feet, inches = objs[i].inches;

        if (inches > 11)
        {
            feet += (int)inches / 12;
            inches -= ((int)inches / 12) * 12;
        }

        if (feet >= max_ft && inches >= max_in)
        {
            max_ft = feet;
            max_in = inches;
        }
    }

    return HEIGHT(max_ft, max_in);
}

HEIGHT HEIGHT::minHeight(const HEIGHT objs[])
{
    double min_ft = 9999999, min_in = 9999999;

    for (int i = 0; i < obj_count; i++)
    {
        double feet = objs[i].feet, inches = objs[i].inches;

        if (inches > 11)
        {
            feet += (int)inches / 12;
            inches -= ((int)inches / 12) * 12;
        }

        if (feet <= min_ft && inches <= min_in)
        {
            min_ft = feet;
            min_in = inches;
        }
    }

    return HEIGHT(min_ft, min_in);
}

HEIGHT HEIGHT::avgHeight(const HEIGHT objs[])
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

    return HEIGHT(feet, inches);
}

std::ostream &operator<<(std::ostream &os, HEIGHT &obj)
{
    return os << obj.getFeet() << " Feet " << obj.getInches() << " Inches ";
}

unsigned int HEIGHT::obj_count = 0;

int main(int argc, char const *argv[])
{
    int n;

    cout << "Enter the number of heights you would like to enter : ";
    cin >> n;

    double hmmm = 1;

    HEIGHT disarray[n], res(hmmm, hmmm);

    for (int i = 0; i < n; i++)
    {
        double feet, inches;

        cout << i << endl;
        cin >> feet;
        cin >> inches;

        disarray[i].setParams(feet, inches);
    }

    res = HEIGHT::avgHeight(disarray);

    cout << "The average height is : " << res << endl;

    res = HEIGHT::minHeight(disarray);

    cout << "The min height is : " << res << endl;

    res = HEIGHT::maxHeight(disarray);

    cout << "The max height is : " << res << endl;

    return 0;
}
