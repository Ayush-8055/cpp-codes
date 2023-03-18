#include<iostream>
using namespace std; 

class Y;
class X{
    int val1;
    public:
    void setData(int a){
        val1 = a;
    }
    friend void swap(X &x,Y &y);
};

class Y{
    int val2;
    public:
    void setData(int b){
        val2 = b;
    }
    friend void swap(X &x,Y &y);
};

void swap(X &x,Y &y){
    cout<<"the values before swap is "<<x.val1<<" and "<<y.val2<<endl;

    int tmp = x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;

    cout<<"the values after swap is "<<x.val1<<" and "<<y.val2<<endl;
}
int main(){
    X a1;
    a1.setData(4);
    Y b1;
    b1.setData(8);
    swap(a1,b1);
    
    return 0;
}