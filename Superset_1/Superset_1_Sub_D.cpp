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
    };

    int n;

    std::cout << "How many employees would you like to store : ";
    std::cin >> n;

    struct Employee emp[n];

    for (int i = 0; i < n; i++)
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

    std::cout << "ID\t";
    std::cout << "Name\t";
    std::cout << "Age\t";
    std::cout << "Net Salary\t" << std::endl;

    for (int i = 0; i < n; i++)
    {
        std::cout << emp[i].EmpId << "\t";
        std::cout << emp[i].Name << "\t";
        std::cout << emp[i].Age << "\t";
        std::cout << emp[i].NetSalary << "\t" << std::endl;
    }

    return 0;
}
