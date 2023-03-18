#include<iostream>
using namespace std; 

class A{
    int a;
    public:
    void setData(int a){
        a = a;  //priority to the local variable in c++
        // this->a = a;
    }
    void getData(){
        cout<<"the value of a is " << a <<endl;
    }
};
int main(){
    A a;
    a.setData(4);
    a.getData();
    return 0;
}