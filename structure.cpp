#include<iostream>
using namespace std; 

// struct employee
// {
//     /* data */
//     int eId;
//     float salary;
//     char favChar;
// };

// int main(){
//     struct employee harry;
//     harry.eId = 1;
//     harry.favChar = 'c';
//     harry.salary = 50000000000;

//     cout<<"the employee eId is "<<harry.eId<<endl;
//     cout<<"the employee favChar is "<<harry.favChar<<endl;
//     cout<<"the employee salary is "<<harry.salary;

//     return 0;
// }

typedef struct employee
{
    /* data */
    int eId;
    float salary;
    char favChar;
} ep;

int main(){
    ep harry;
    ep suresh;
    harry.eId = 1;
    harry.favChar = 'c';
    harry.salary = 50000000000;

    suresh.eId = 2;
    suresh.favChar = 'b';
    suresh.salary = 234332243;

    cout<<"the employee harry's  eId is "<<harry.eId<<endl;
    cout<<"the employee  harry's favChar is "<<harry.favChar<<endl;
    cout<<"the employee harry's  salary is "<<harry.salary<<endl;

    cout<<"the employee suresh's eId is "<<suresh.eId<<endl;
    cout<<"the employee suresh's favChar is "<<suresh.favChar<<endl;
    cout<<"the employee suresh's salary is "<<suresh.salary;


    return 0;
}