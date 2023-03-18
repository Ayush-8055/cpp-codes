#include<iostream>
using namespace std;

class employee{
    public:

    string name;
    int salary;

    employee(string n,int s,int sp)
    {
        this->name = n;
        this->salary = s;
        this->secretpassword = sp;
    }

    void printdetails()
    {
         cout<<"first employee name is : "<<this->name<<endl<<"and his salary : "<<this->salary<<endl;

    }
     void getssecretpassword()
    {
        cout<<"the secret password is "<<this->secretpassword<<endl;
    }
    employee(){}

    private:
    int secretpassword;
};

class programmer: public employee
{
    public:
    int errors;
};

int main() 
{
    cout<<"hello world"<<endl;

    employee first("ayush shah",100,3322443);
    // first.name = "ayush shah";
    // first.salary = 100; 

    cout<<"first employee name is : "<<first.name<<endl<<"and his salary : "<<first.salary<<endl;

    first.printdetails();
    first.getssecretpassword();
    programmer secound;
    secound.name = "name";
    secound.salary = 140;

    secound.printdetails();

    return 0; 
}