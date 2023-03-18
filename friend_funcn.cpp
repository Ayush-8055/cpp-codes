#include<iostream>
using namespace std; 

class complex{
    int a,b;
    friend complex sumcomplex(complex o1,complex o2);
    public:
    void setData(int v1,int v2){
        a = v1;
        b = v2;
    }
    void printData(void){
         cout << "the Complex number is " << a << "+" << b << "i" << endl;
    }
};
//below line means that sumcomplex funcn is allowed to do anything with my private members
complex sumcomplex(complex o1,complex o2){
    complex o3;
    o3.setData((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main(){
    complex o1,o2,sum;
    o1.setData(2,3);
    o1.printData();

    o2.setData(4,6);
    o2.printData();

    sum = sumcomplex(o1,o2);
    sum.printData();

    return 0;
}