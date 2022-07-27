// Create an abstract class Compartment to represent a rail coach.
//  Provide an abstract function notice in this class.
//  Derive FirstClass, Ladies, General, Luggage classes from the compartment class.
//  Override the notice function in each of them to print notice suitable to the type
// of the compartment. Create a class TestCompartment .
// Write main function to do the following: Declare an array of Compartment of size 10.
// Create a compartment of a type as decided by a randomly generated integer in the range 1 to 4.
// Check the polymorphic behavior of the notice method
#include <iostream>
using namespace std;
class Compartment
{
private:
public:
    virtual void notice() = 0;
};

class FirstClass : public Compartment
{
private:
public:
    void notice()
    {
        cout << "FirstClass" << endl;
    }
};
class Ladies : public Compartment
{
private:
public:
    void notice()
    {
        cout << "Ladies Class" << endl;
    }
};
class General : public Compartment
{
private:
public:
    void notice()
    {
        cout << "General Class" << endl;
    }
};
class Luggage : public Compartment
{
private:
public:
    void notice()
    {
        cout << "Luggage Class" << endl;
    }
};
class TestCompartment : public Compartment
{
private:
public:
    void main()
    {
    }
};

int main()
{
    Compartment *p;

    FirstClass ob1;
    p = &ob1;
    p->notice();

    Ladies ob2;
    p = &ob2;
    p->notice();

    General ob3;
    p = &ob3;
    p->notice();

    Luggage ob4;
    p = &ob4;
    p->notice();

    return 0;
}