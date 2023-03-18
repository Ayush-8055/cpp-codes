#include <iostream>
using namespace std;
/*
syntax for initialization list in constructor :
constructor ( argument-list) : initialization section
{
    Assignment + other code;
}

class test{
    int a,b;
    public:
    test(int i,int j) : a(i),b(j){constructor body}
};
*/

class test
{
    // int a, b;
    int b,a;

public:
    // test(int i, int j) : a(i), b(j) 
    // test(int i, int j) : a(i), b(i+j) 
    // test(int i, int j) : a(i), b(2 * j) 
    // test(int i, int j) : a(i), b(a + j) 

    // test(int i, int j) : b(j) , a(i + b) --> RED Flag this will create problems because a will be  initialize first
    test(int i, int j) : b(j) , a(i + b)
    { 
        cout << "Constructor is executed "<<endl; 
        cout <<"the value is A and B is "<<a<<"  and  "<<b<<endl;
    }
};
int main()
{
    test T(4,6);
    return 0;
}