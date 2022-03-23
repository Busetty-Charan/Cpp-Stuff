#include <iostream>

int main()
{
    struct Employee
    {
        char EmpId[10];
        char Name[100];
        int Age;
        int DA;
        int PF;
        int BasicSalary;
        int GrossSalary;
        int NetSalary;
    }emp[3];

    for (int i = 0; i < 3; i++)
    {
        std::cout << "Enter your ID : ";
        std::cin >> emp[i].EmpId;

        std::cout << "Enter your Name : ";
        std::cin >> emp[i].Name;

        std::cout << "Enter your Age : ";
        std::cin >> emp[i].Age;

        std::cout << "Enter your Dearness Allowance in Percentage : ";
        std::cin >> emp[i].DA;

        std::cout << "Enter your Provident Fund in Percentage : ";
        std::cin >> emp[i].PF;

        std::cout << "Enter your Base Salary : ";
        std::cin >> emp[i].BasicSalary;

        emp[i].GrossSalary = emp[i].BasicSalary + ((float)emp[i].BasicSalary * ((float)emp[i].DA / 100.00));
        emp[i].NetSalary = emp[i].GrossSalary + ((float)emp[i].BasicSalary * ((float)emp[i].PF / 100.00));
    }

    for (int i = 0; i < 3; i++)
    {
        std::cout << "Your ID : ";
        std::cout << emp[i].EmpId << std::endl;

        std::cout << "Your Name : ";
        std::cout << emp[i].Name << std::endl;

        std::cout << "Your Age : ";
        std::cout << emp[i].Age << std::endl;

        std::cout << "Your Net Salary : ";
        std::cout << emp[i].NetSalary << std::endl;
    }

    return 0;
}
