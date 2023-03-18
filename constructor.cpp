#include<iostream>
using namespace std; 

class Complex{
    int a,b;
    public: 
    //creating a constructor
    // constructor is a special member function with same name as of the class.
    // it is used to initialize the object of its class
    // it is automatically invoked(call) whenever a object is created
    Complex(void); //constructor declaration
    void printData(void){
        cout<<"the complex number is "<< a <<" + "<<b<<"i"<<endl;
    }
};

Complex::Complex(void){ //-----> default constructor as it takes no parameter
    a=10;
    b=13;
}
int main(){
    Complex c;
    c.printData();
    return 0;
}