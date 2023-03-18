#include <iostream>
using namespace std;

class Complex
{
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void sumofobject(Complex o1, Complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printData(void)
    {
        cout << "the Complex number is " << a << "+" << b << "i" << endl;
    }
};
int main()
{
    Complex o1, o2, o3;
    o1.setData(2, 3);
    o1.printData();
    o2.setData(4, 5);
    o2.printData();
    o3.sumofobject(o1, o2);
    o3.printData();

    return 0;
}