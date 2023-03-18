#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    void printData(void)
    {
        cout << "the complex number is " << a << " + " << b << "i" << endl;
    }
    Complex(int x){
        a = x;
        b = 0;
    }
};
int main()
{
    Complex c1(4,5);
    c1.printData();

    Complex c2(7);
    c2.printData();

    return 0;
}

// constructor with default argument
// #include<iostream>
// using namespace std; 

// class simple{
//     int data1,data2;
//     public:
//     simple(int x,int y = 3){
//         data1 = x;
//         data2 = y;
//     }
//     void printData(void);
// };
// void simple::printData(void){
//     cout<<"the value of data1 and data2 is "<<data1<<" and "<<data2<<endl;
// }
// int main(){
//     simple s1(4,6),s(7);
//     s1.printData();

//     s.printData();
//     return 0;
// }