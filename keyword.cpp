#include <iostream>
using namespace std;

int main()
{
    // Basic Example
    int a = 4;
    int *ptr = &a;
    cout << "the value of a is " << *ptr << endl;

    // New Keyword
    // New operator
    // int *p = new int(40);
    float *p = new float(40.78);
    // delete p; //delete operator used for free the memory allocated dynamically
    cout << "the value at adress p is " << *p  << endl;

    int *arr = new int[3]; // memory allocated dynamicaly by new operator 
    arr[0] = 32;
    // arr[1] = 362; 
    *(arr+1) = 456; // also written as
    arr[2] = 3233;

    // Delete operator
    // delete[] arr;

    cout<<"the value of arr[0] "<<arr[0]<<endl;
    cout<<"the value of arr[1] "<<arr[1]<<endl;
    cout<<"the value of arr[2] "<<arr[2]<<endl;


    return 0;
}