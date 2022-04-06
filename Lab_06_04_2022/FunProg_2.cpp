#include <iostream>

using namespace std;

inline int greatest_Of_Three(int one = 0, int two = 0, int three = 0)
{
    return (one > two && one > three) ? one : (two > one && two > three) ? two : three;
}

int main()
{
    int one, two, three;

    cout << "Enter three numbers : ";
    cin >> one >> two >> three;

    cout << "The greatest of the three is : " << greatest_Of_Three(one, two, three) << endl;
    
    return 0;
}