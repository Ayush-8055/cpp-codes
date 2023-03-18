/* oop - classes and objects
       c++  --> initialy called --> c with classes by stroustroup
       class --> extensions of structures( in C )
       structuresw had limitations
           -->members are public
           --> No methods
        classes --> structures + more
        classes --> can have methods and properties
        classes --> can make few members as private & few as public
        structures in c++ are typedef
        you can declare oblects along with the class declaration like this :
            class Employee {
                // class declaration
            } harry,rohan,ayush;
          harry.salary = 23; make no sense if salary is private
    */

    // Nesting of member functions
#include <iostream>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones(void);
    void display(void);
};

void binary::read(void){
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}
void binary:: chk_bin(void){
    for( int i = 0; i<s.length(); i++)
    {
        if(s.at(i) != '0' && s.at(i) != '1' ){
            cout<<"the string is not binary number"<<endl;
            exit(0);
        }
    }
}

void binary ::ones(void){
    chk_bin(); //thats called nesting of members using without dot operator
    for( int i = 0; i<s.length(); i++)
    {
        if(s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else {if(s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
    }
}

void binary ::display(void)
{
    cout<<endl<<"the binary number is :";
    for(int j = 0; j<s.length(); j++)
    {
        cout<<s.at(j);
    }
}
int main()
{
    

    binary b;
    b.read();
   //b.chk_bin();
    b.display(); //if this in private section then unable to use
    b.ones();
    b.display();

    return 0;
}