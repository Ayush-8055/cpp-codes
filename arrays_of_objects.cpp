#include<iostream>
using namespace std; 

class Employee{
    int id;
    int salary;
    public:
        void setId(void){
            salary = 122;
            cout<<"Enter the Id of Employee "<<endl;
            cin>>id;
        }
        void getId(void){
            cout<<"Id of he Employee is "<<id<<endl;
        }
};

int main(){
    // Employee harry, rohan, lovish;
    // harry.setData();
    // harry.getData();
    Employee fb[100];

    int n;
    cout<<"Enter the total number of Employee";
    cin>>n;
    for(int i=0; i<n; i++){
        fb[i].setId();
        fb[i].getId();
    }


    return 0;
}