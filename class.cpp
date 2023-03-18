#include<iostream>
using namespace std; 

class Employee {

    private :
       int a,b,c;
    public:
        int d,e;
    void setData(int a1,int b1,int c1); //funcn definition 
    void getData(){
        cout<<"the value is a "<<a<<endl;
        cout<<"the value is b "<<b<<endl;
        cout<<"the value is c "<<c<<endl;
        cout<<"the value is d "<<d<<endl;
        cout<<"the value is e "<<e<<endl;
    }
    
};

 void Employee :: setData(int a1,int b1,int c1){ // funcn declaration
    a = a1;
    b = b1;
    c = c1;
 }
int main(){
    Employee harry;
    // harry.a = 123; --> is get error because private members not excess by simply20
    harry.d = 32;
    harry.e = 22;
    harry.setData(1,2,3); 
    harry.getData();
    return 0;
}