#include<iostream>
using namespace std; 

int main(){
    /* what is pointer? pointer is a datatype which holds the addres of other data types*/
    int a = 3;
    int *p = &a;
    // (addres of) operator 
    cout<<"value of a is : "<<a<<endl;
    cout<<"value of a is : "<<p<<endl;
    // * ---> (value at) dereference operator
    cout<<"value of a is : "<<&a<<endl;
    cout<<"value of a is : "<<&p<<endl;

    /* pointer to pointer is datatype which is  used to store the addres of a datatype  whose alreay store a addres of another datatype */
    int ** c = &p;
    cout<<"value of c is : "<<c<<endl;
    return 0;
}