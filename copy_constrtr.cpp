#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int x)
    {
        a = x;
    }
    Number(Number &obj) // copy constructor......
    { // when no copy constructor is found,compiler supplies its own copy constructor
        cout << "Copy constructor called !!!!!" << endl;
        a = obj.a;
    }
    void display(void)
    {
        cout << "the number is " << a << endl;
    }
};
int main()
{
    Number X(4), Y(12), Z2;
    X.display();
    Y.display();
    Number Z(X); // copy constructor invoked
    Z.display();

    Z2 = Y; // copy constructor not called
    Z2.display();

    Number Z3 = Y; // copy constructor invoked
    Z3.display();

    return 0;
}