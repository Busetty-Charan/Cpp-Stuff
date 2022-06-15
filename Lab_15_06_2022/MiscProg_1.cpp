#include <iostream>

using namespace std;

class Matrix
{
    private:

        int grid[3][3];

    public:

        Matrix()
        {
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    grid[i][j] = 0;
                }
            }
        }

        Matrix(int (&cp)[3][3])
        {
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    grid[i][j] = cp[i][j];
                }
            }
        }

        void dispMatrix()
        {
            for (int i = 0; i < 3; i++)
            {
                cout << endl;

                for (int j = 0; j < 3; j++)
                {
                    cout << grid[i][j] << " ";
                }
            }
        }

        friend void dotP(Matrix &op1, Matrix &op2);
};

void dotP(Matrix &op1, Matrix &op2)
{
    int prod[3][3];
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            prod[i][j] = 0;
                
            for (int k = 0; k < 3; k++)
            {
                prod[i][j] += op1.grid[i][k] * op2.grid[k][j];
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            op1.grid[i][j] = prod[i][j];
        }
    }
}

int main()
{
    int arr[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
    
    Matrix m1(arr), m2(arr);

    dotP(m1, m2);

    m1.dispMatrix();

    cout << endl;

    return 0;
}
