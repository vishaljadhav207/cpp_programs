#include <iostream>
using namespace std;
class Student
{
private:
    int id;
    string name;

public:
    void setId(int i)
    {
        id = i;
    }
    void setName(string n)
    {
        name = n;
    }
    int getId()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
};
class Marks : public Student
{
private:
    float M1, M2;

public:
    void setM1(float m)
    {
        M1 = m;
    }
    void setM2(float m)
    {
        M2 = m;
    }
    float getM1()
    {
        return M1;
    }
    float getM2()
    {
        return M2;
    }
};
class Sports
{
private:
    char Grade;

public:
    void setGrade(char grade)
    {
        Grade = grade;
    }
    char getGrade()
    {
        return Grade;
    }
};
class Result : public Marks, public Sports
{
private:
    float avg;

public:
    void result()
    {
        avg = (getM1() + getM2()) / 2;
    }
    void Show()
    {
        cout << "student Info: " << endl
             << getName() << "\t" << getId() << endl
             << "Marks M1= " << getM1() << "\t"
             << "Marks M2= " << getM2() << endl
             << "average Marks : " << avg << endl
             << "Sports Grade is " << getGrade();
    }
};

int main()
{
    Result result;
    result.setId(25121);
    result.setName("vj");
    result.setM1(100);
    result.setM2(99);
    result.setGrade('A');
    result.Show();
    return 0;
}