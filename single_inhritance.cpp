#include <iostream>
using namespace std;

class Base
{
    int data1;

public:
    int data2;
    void setData(void);
    int getData1();
    int getData2();
};

void Base::setData(void)
{
    data1 = 10;
    data2 = 20;
}

int Base::getData1()
{
    return data1;
}

int Base::getData2()
{
    return data2;
}

class Derived : public Base
{ // class is being derived publically
    int data3;

public:
    void process();
    void display();
};
void Derived::process()
{
    data3 = data2 * getData1();
}
void Derived::display()
{
    cout << "the data1 is : " << getData1() << endl;
    cout << "the data2 is : " << data2 << endl;
    cout << "the data2 is : " << data3 << endl;
}

int main()
{
    Base B;
    B.setData();
    Derived D;
    D.setData();
    D.process();
    D.display();
    return 0;
}