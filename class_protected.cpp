#include <iostream>
using namespace std;

class Base
{
protected:
    int a;

private:
    int b;
};
/*
For a protected member:
                public Derivation      private Derivation       protected Derivation
1.private        Not inherited          Not inherited              Not inherited
2.protected      protected              private                    protected
3.public         public                  private                  protected

*/
class Derived : protected Base{
    public:
    void getInfo(void){
        cout<<a<<endl;
    }
};
int main()
{
    Base B;
    Derived D;
    // cout<<D.a; // will not work since a is protected in both base as well as derived class
    return 0;
}