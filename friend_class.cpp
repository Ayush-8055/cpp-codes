#include<iostream>
using namespace std; 

//Forward declaration
class complex;

class calculator {
    public:
    int add(int a,int b){
        return a+b;
    }
    int sumrealcomplex(complex o1,complex o2);
    int sumcompcomplex(complex o1,complex o2);
};


class complex{
    int a,b;
    //individually declare function as a friend
    // friend int calculator :: sumrealcomplex(complex o1,complex o2);
    // friend int calculator :: sumcompcomplex(complex o1,complex o2);

    //Aliter: Declaring the Entire class a friend
    friend class calculator; 
    public:
    void setData(int v1,int v2){
        a = v1;
        b = v2;
    }
    void printData(void){
         cout << "the Complex number is " << a << "+" << b << "i" << endl;
    }
};


int calculator::sumrealcomplex(complex o1,complex o2){
        return (o1.a+o2.a);
    }
int calculator::sumcompcomplex(complex o1,complex o2){
        return (o1.b+o2.b);
    }


int main(){
    complex o1,o2;
    o1.setData(1,4);
    o1.printData();
    o2.setData(3,5);
    o2.printData();

    calculator calc ;
    int res1 = calc.sumrealcomplex(o1,o2);
    cout<<"the real part of the complex number "<<res1<<endl;
    

    int res2 = calc.sumcompcomplex(o1,o2);
    cout<<"the complex part of the complex number "<<res2<<endl;
    
    return 0;
}