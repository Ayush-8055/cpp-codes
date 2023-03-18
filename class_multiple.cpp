#include<iostream>
using namespace std; 
// syntax for inheriting in multiple inheritance
// class Derived : visibility-mode base1,visibility-mode base 2
// {
//     class body of class "Derived"
// }

class base1{
    protected:
    int base1int;
    public:
    void stebase1(int x){
        base1int = x;
    }
};

class base2{
    protected:
    int base2int;
    public:
    void stebase2(int y){
        base2int = y;
    }
};
/* the inherited device will look something like this
   Data members :
    base1int --> protected
    base2int --> protected
   Members functions :
    setbase1() --> public
    setbase2() --> public
    show() --> public
*/
class Derived : public base1, public base2 {
    public:
    void show(void){
        cout<<"first number is "<<base1int<<" secound number is "<<base2int<<endl;
    }
};
int main(){
    Derived D;
    D.stebase1(12);
    D.stebase2(14);
    D.show();
    return 0;
}