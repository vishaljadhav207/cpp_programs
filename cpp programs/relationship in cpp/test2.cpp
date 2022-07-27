#include <iostream> //has a relatin ship

#include <vector>
using namespace std;

class Address
{
private:
    int HouseNumber;
    string BuildingName, AreaName, City;

public:
    Address()
    {
    }
    Address(int h, string buildingName, string areaName, string city)
    {
        HouseNumber = h;
        BuildingName = buildingName;
        AreaName = areaName;
        City = city;
    }
    void showAddress()
    {
        cout << HouseNumber << "\t" << BuildingName << endl
             << AreaName << "\t" << City << endl;
    }
};

class Student
{

private:
    string Name;
    int Id;
    Address address;

public:
    Student(string na, int i, Address add)
    {
        Name = na;
        Id = i;
        address = add;
    }
    void showStudent()
    {
        cout << Id << "\t" << Name << endl;
    }
};

int main()
{
    Address ad(50, "samartha", "saiNagar", "Abad");
    Student st("vj", 25121, ad);
    st.showStudent();
    ad.showAddress();

    return 0;
}

