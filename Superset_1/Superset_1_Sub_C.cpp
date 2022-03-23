#include <iostream>

int main()
{
    char name[100], regno[20], branch[50];
    int YearOfStudy, marks[5], total = 0;

    std::cout << "Enter your Name : ";
    std::cin >> name;

    std::cout << "Enter your Reg.No : ";
    std::cin >> regno;

    std::cout << "Enter your Branch : ";
    std::cin >> branch;

    std::cout << "Enter your Year of Study : ";
    std::cin >> YearOfStudy;

    std::cout << std::endl;

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Enter your marks in subject " << i + 1 << " : ";
        std::cin >> marks[i];

        total += marks[i];
    }

    std::cout << "Name : " << name << std::endl;
    std::cout << "Register Number : " << regno << std::endl;
    std::cout << "Branch : " << branch << std::endl;
    std::cout << "Year of Study : " << YearOfStudy << std::endl;

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Your marks in subject " << i + 1 << " : " << marks[i] << std::endl;
    }

    std::cout << "Total marks obtained : " << total << std::endl;
    std::cout << "Percentage : " << ((float)total / 500) * 100 << std::endl;

    return 0;
}
