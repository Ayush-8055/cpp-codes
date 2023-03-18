#include<iostream>
using namespace std; 

class Base1{
    int a;
    public:
    void greet(){
        cout<<"hello "<<endl;
    }
};

class Base2{
    int b;
    public:
    void greet(){
        cout<<"How are you "<<endl;
    }
};

class Derived : public Base1, public Base2{
    public:
    void greet(){
          Base2 ::greet(); //this is the way how to resolve ambiguity.
    }
};

class B{
    public:
    void say(){
        cout<<"say something "<<endl;
    }
};

class D : public B{
    public:
    // Ambiguity resolve selfly........ 
    void say(){
        cout<<"check inheritance "<<endl;
    }
};
int main(){
    // Ambiguity 1.
//     Base1 b1;
//     Base2 b2;
//     b1.greet();
//     b2.greet();
//     Derived D;
//     D.greet();

 B b;
 b.say();

 D d;
 d.say();


    return 0;
}