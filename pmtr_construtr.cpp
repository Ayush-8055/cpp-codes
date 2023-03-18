#include<iostream>
using namespace std; 

class Complex{
    int a,b;
    public: 
    Complex(int x,int y); //constructor declaration
    void printData(void){
        cout<<"the complex number is "<< a <<" + "<<b<<"i"<<endl;
    }
};
Complex::Complex(int x,int y){ //-----> default constructor as it takes no parameter
    a=x;
    b=y;
}
int main(){
    Complex c(4,3); //Implicit call
    c.printData();

    Complex c1 = Complex(5,7); //Explicit call
    c1.printData();
    return 0;
}