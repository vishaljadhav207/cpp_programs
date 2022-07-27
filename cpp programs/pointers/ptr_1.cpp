#include <iostream>
using namespace std;
void watchvdo(int *viewsptr)
{
    *viewsptr = *viewsptr + 1;
}
int main()
{
    int views = 100;
    watchvdo(&views);
    cout << views << endl;
    return 0;
}