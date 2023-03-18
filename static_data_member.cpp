#include <iostream>
using namespace std;

class Employee
{
    int id;
    // int count; //it unable to ttravel from one object to another so that make static
    static int count; // by default value assign is zero and share by all objects
public:
    void setData(void)
    {
        cout << "Enter the Employee id ";
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "the id of the Employee is " << id << " and this is Employee no " << count << endl;
    }
    static void getCount(void){ //static member function used for all objects and excess by class only
        // cout<<id // throws an error
        cout<<"the total Employee is "<<count<<endl;
    }
};

int Employee::count;
// count is the static data member of class Employee
int main()
{
    Employee harry, rohan, lovish;
    // harry.id = 1;
    // harry.count = 1; //cannot do this as id and count are private member

    harry.setData();
    harry.getData();
    Employee::getCount(); //directly run from class

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lovish.setData();
    lovish.getData();
    Employee::getCount();

    return 0;
}