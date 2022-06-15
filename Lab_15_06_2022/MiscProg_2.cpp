#include <iostream>

using namespace std;

class IntArray;
class FloatArray;

class IntArray
{
private: 
    int arr[5];

public:

    IntArray();
    IntArray(int (&cp)[5]);
    int read(int index) const;
    friend void minmax(IntArray &x, FloatArray &y);
};

class FloatArray
{
private:
    float arr[5];

public:

    FloatArray();
    FloatArray(float (&cp)[5]);
    float read(int index) const;
    friend void minmax(IntArray &x, FloatArray &y);
};

IntArray::IntArray()
{
    for (int i = 0; i < 5; i++)
    {
        arr[i] = 0;
    }
}

IntArray::IntArray(int (&cp)[5])
{
    for (int i = 0; i < 5; i++)
    {
        arr[i] = cp[i];
    }
}

int IntArray::read(int index) const
{
    return arr[index];
}

FloatArray::FloatArray()
{
    for (int i = 0; i < 5; i++)
    {
        arr[i] = 0;
    }
}

FloatArray::FloatArray(float (&cp)[5])
{
    for (int i = 0; i < 5; i++)
    {
        arr[i] = cp[i];
    }
}

float FloatArray::read(int index) const
{
    return arr[index];
}

void minmax(IntArray &x, FloatArray &y)
{
    float min = 6;
    float max = 0;

    for (int i = 0; i < 5; i++)
    {
        if (min > x.read(i))
        {
            min = x.arr[i];

            if (min > y.read(i))
            {
                min = y.arr[i];
            }
        }

        if (max < x.read(i))
        {
            max = x.arr[i];

            if (max < y.read(i))
            {
                max = y.arr[i];
            }
        }
    }

    cout << "Minimum : " << min << endl;
    cout << "Maximum : " << max << endl;
}

int main()
{
    int iarr[] = {1, 2, 3, 4, 5};
    float farr[] = {0.5, 1.5, 2.5, 3.5, 4.5};
    IntArray x(iarr);
    FloatArray y(farr);

    minmax(x, y);
    
    return 0;
}
