#include<iostream>
using namespace std; 
/*
case 1.
class B : public A{
    //order of execution of constructor -> first A() then B()
};

case 2.
class A : public B,public C{
    order of execuion of constructor B() then C() and A()
};

case 3.
class A : public B,virtual public C{
    // order of execution of constructor -> C() then B() then A
}
*/
class Base1{
    int data1;
    public:
       Base1(int i){
        data1 = i;
        cout<<"The Base1 class constructor invoked "<<endl;
       }
       void print_Data1(){
        cout<<"the Data1 is "<<data1<<endl;
       }
};

class Base2{
    int data2;
    public:
       Base2(int i){
        data2 = i;
        cout<<"The Base2 class constructor invoked "<<endl;
       }
       void print_Data2(){
        cout<<"the Data2 is "<<data2<<endl;
       }
};

class Derived : public Base1,public Base2{
    int derived1,derived2;
    public:
    Derived(int a,int b,int c,int d) : Base1(a),Base2(b)
    {
        derived1 = c;
        derived2 = d; 
        cout<<"Derived class constructor invoked "<<endl;
    }
    void print_Data(){
        cout<<"the values "<<derived1<<" and "<<derived2<<endl; 
    }
};
int main(){
    Derived harry(1,2,3,4);
    harry.print_Data();
    harry.print_Data1();
    harry.print_Data2(); 
    return 0;
}