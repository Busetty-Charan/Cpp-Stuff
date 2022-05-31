#include <iostream>

using namespace std;

class EB_amount;

class EB_amount
{
private:
    double units_used;
    double bill;

public:
    EB_amount();
    EB_amount(double units);

    void setUnits(double units);
};

EB_amount::EB_amount()
{
    units_used = 0;
}

EB_amount::EB_amount(double units)
{
    units_used = units;
}

void EB_amount::setUnits(double units)
{
    units_used = units;
}

int main(int argc, char const *argv[])
{
    return 0;
}
