#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        salary = 34;
        id = inpId;
    }
    void getInfo(void)
    {
        cout << "the id is " << id << " and salary is " << salary << endl;
    }
    Employee() {}
};

// Derived Class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
   class members/methods/etc.....
}
Note:
1. Default visibility mode is private
2. public visibility mode : public memeber of the base class becomes public member of derived class
3. private visibility mode : public memeber of the base class becomes private member of derived class
4. private members are never Inherited
*/

// Creating a programmer class derived from Employee Base class
class Programmer : Employee
{
public:
    Programmer(int inpId)
    {
        id = inpId;
    }
    int languageCode = 9;
};
int main()
{
    Employee E(1);
    E.getInfo();

    Programmer skillf(2);
    cout << skillf.languageCode;

    return 0;
}