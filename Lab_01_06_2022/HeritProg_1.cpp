#include <iostream>

using namespace std;

class InputData;
class Arith_Unit;
class Logic_Unit;
class ALUnit;

class InputData
{
private:
    int data_a;
    int data_b;

public:
    InputData();
    InputData(int a, int b);

    int get_a() const;
    int get_b() const;
};

class Arith_Unit : private InputData
{
public:
    Arith_Unit()
    {
    }

    Arith_Unit(int a, int b) : InputData(a, b)
    {
    }

    int add_a() const;
    int sub_a() const;
    int mul_a() const;
    int div_a() const;
};

class Logic_Unit : private InputData
{
public:
    Logic_Unit()
    {
    }

    Logic_Unit(int a, int b) : InputData(a, b)
    {
    }

    int and_l() const;
    int or_l() const;
    int xor_l() const;
};

class ALUnit : public Arith_Unit, public Logic_Unit
{
public:
    ALUnit()
    {
    }

    ALUnit(int a, int b) : Arith_Unit(a, b), Logic_Unit(a, b)
    {
    }
};

InputData::InputData()
{
    data_a = 0;
    data_b = 0;
}

InputData::InputData(int a, int b)
{
    data_a = a;
    data_b = b;
}

int InputData::get_a() const
{
    return data_a;
}

int InputData::get_b() const
{
    return data_b;
}

int Arith_Unit::add_a() const
{
    return get_a() + get_b();
}

int Arith_Unit::sub_a() const
{
    return get_a() - get_b();
}

int Arith_Unit::mul_a() const
{
    return get_a() * get_b();
}

int Arith_Unit::div_a() const
{
    return get_a() / get_b();
}

int Logic_Unit::and_l() const
{
    return get_a() & get_b();
}

int Logic_Unit::or_l() const
{
    return get_a() | get_b();
}

int Logic_Unit::xor_l() const
{
    return get_a() ^ get_b();
}

int main(int argc, char const *argv[])
{
    ALUnit test(2, 3);

    cout << test.add_a() << endl;
    cout << test.sub_a() << endl;
    cout << test.mul_a() << endl;
    cout << test.div_a() << endl;
    cout << test.and_l() << endl;
    cout << test.or_l() << endl;
    cout << test.xor_l() << endl;

    return 0;
}
