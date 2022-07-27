#include <iostream>
using namespace std;
class Complex
{
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    // This is automatically called when '+' is used with
    // between two Complex objects
    Complex operator+(Complex obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void print() { cout << real << " + i" << imag << '\n'; }
};

int main()
{
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2;
    c3.print();
}
// #include <iostream>
// using namespace std;
// class Complex
// {
// private:
//     float real, img;

// public:
//     Complex(float x, float y)
//     {
//         real = x;
//         img = y;
//     }
//     Complex()
//     {
//         real = 0;
//         img = 0;
//     }
//     Complex operator+(Complex ob)
//     {
//         Complex temp;
//         temp.real = this->real + ob.real;
//         temp.img = this->img+ ob.img;
//         cout << "operator fun called!!";
//         return (temp);
//     }
//     void show()
//     {
//         cout << real << "+i"<< img << endl;
//     }
// };
// int main()
// {
//     Complex t1(10, 20);
//     Complex t2(2, 4);
//     Complex t3 = t1 + t2;
//     t3.show();
// }