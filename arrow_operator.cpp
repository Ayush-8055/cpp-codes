#include<iostream>
using namespace std; 

class complex{
    int real,imaginary;
    public:
    void getData(){
        cout<<"the real part is "<<real<<endl;
        cout<<"the imaginay part is "<<imaginary<<endl;
    }
    void setData(int a,int b){
        real = a;
        imaginary = b;
    }
};
int main(){
    // arrow operator is used to defrence the pointer and run its function
    complex C;
    C.setData(23,45);
    C.getData();

    // complex C1;
    // complex *ptr = &C1;
    complex *ptr = new complex;
    // (*ptr).setData(44,66);
    ptr->setData(44,66); // exactly same as upper line 
    (*ptr).getData();

    // Aray of objects
    complex *ptr1 = new complex[4];
    ptr1->setData(787878,54576);
    ptr1->getData();

    (ptr+1)->setData(23232,4343);
    (ptr+1)->getData();
    return 0;
}