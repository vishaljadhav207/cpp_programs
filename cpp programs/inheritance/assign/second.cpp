#include <iostream>
using namespace std;
class Person
{
private:
    string name;

public:
    Person()
    {
        cout << "Enter Name: " << endl;
        getline(cin, name);
    }
    string getname()
    {
        return name;
    }
};
class Employee : public Person
{
private:
    double annualSalary;
    int yearStartedWorking;
    string insuranceNumber;

public:
    Employee()
    {
        cout << "Enter annual salary: " << endl;
        cin >> annualSalary;
        cout << "Year started working: " << endl;
        cin >> yearStartedWorking;
        cout << "Insurance Number: " << endl;
        cin >> insuranceNumber;
    }
    double getSalary()
    {
        return annualSalary;
    }
    int getYearStart()
    {
        return yearStartedWorking;
    }
    string getInsuranceNumber()
    {
        return insuranceNumber;
    }
};
class TestEmployee : public Employee
{
private:
public:
    void Test()
    {
        cout << endl
             << "---------------------------------------------------"
             << endl
             << "Name of employee:"
             << "\t"
             << getname() << endl
             << "Annual Salary of employee:"
                "\t"
             << getSalary() << endl
             << "Year started working: "
             << "\t"
             << getYearStart() << endl
             << "Insurance Number: "
             << "\t"
             << getInsuranceNumber() << endl;
    }
};

int main()
{
    TestEmployee E1;
    E1.Test();

    return 0;
}