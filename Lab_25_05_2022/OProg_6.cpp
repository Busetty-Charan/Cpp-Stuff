#include <iostream>

using namespace std;

class TC2;
class TC1
{
private:
    int t;

public:
    TC1()
    {
        t = 5;
    }

    int gt()
    {
        return t;
    }

    operator TC2();
};

class TC2
{
private:
    int tt;

public:
    TC2()
    {
        tt = 6;
    }

    int gt()
    {
        return tt;
    }

    operator TC1()
    {
        TC1 y;
        return y;
    }
};

TC1::operator TC2()
{
    TC2 x;
    return x;
}

int main(int argc, char const *argv[])
{
    TC1 a;
    TC2 b;

    cout << a.gt();
    cout << b.gt();

    TC1 c;

    cout << ((TC2)c).gt();

    TC2 d;

    cout << ((TC1)d).gt();

    return 0;
}
