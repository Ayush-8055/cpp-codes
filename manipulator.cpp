#include<iostream>
#include<iomanip>// includes library for manipulator like setw
using namespace std;

int main()
{
    //(endl) is also a manipulator 
    int a=4,b=22,c=343;
    cout<<"the value of a is : "<<setw(4)<<a<<endl;
    cout<<"the value of b is : "<<setw(4)<<b<<endl;
    cout<<"the value of c is : "<<setw(4)<<c<<endl;
    return 0;
} 