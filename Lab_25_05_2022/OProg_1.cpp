#include <iostream>
#include <math.h>

using namespace std;

class Dist
{
    private:

        double distance;

    public:

        Dist()
        {
            distance = 0;
        }

        Dist(const double &dist)
        {
            distance = dist;
        }

        double gd() const
        {
            return distance;
        }

        Dist operator +(const Dist &dist) const
        {
            return Dist(distance + dist.gd());
        }

        bool operator ==(const Dist &dist) const
        {
            return (distance == dist.gd()) ? true : false;
        }
};

int main()
{
    Dist A(7), B(7);

    cout << (A + B).gd() << endl;
    cout << (A == B) << endl;
    
    return 0;
}