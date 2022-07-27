// Create an abstract class Instrument which is having the abstract function play.
//  Create three more sub classes from Instrument which is Piano, Flute, Guitar.
//   Override the play method inside all three classes printing a message “Piano is playing tan tan tan tan ” for Piano class “Flute is playing toot toot toot toot”
//    for Flute class “Guitar is playing tin tin tin ” for Guitar class
//     You must not allow the user to declare an object of Instrument class.
//     Create an array of 10 Instruments. Assign different type of instrument
//      to Instrument reference.
// Check for the polymorphic behavior of play method.
//  Use the instanceof operator to print that which object stored at which index of
//   instrument array.
// #include <iostream>
#include <iostream>
using namespace std;
class instrument
{
private:
public:
    virtual void play() = 0;
};
class piano : public instrument
{
public:
    void play()
    {
        cout << "Piano is playing tan tan tan tan" << endl;
    }
};
class flute : public instrument
{
public:
    void play()
    {
        cout << "flute is playing took took" << endl;
    }
};
class guitar : public instrument
{
public:
    void play()
    {
        cout << "guitar is playing tan tan tan tan" << endl;
    }
};

int main()
{
    
    
    instrument *p;

    piano ob1;
    p = &ob1;
    p->play();
    flute ob2;
    p = &ob2;
    p->play();
    guitar ob3;
    p = &ob3;
    p->play();
    
    return 0;
   
}
