#include <iostream>
using namespace std;
class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit(int p, int y, int r);
    BankDeposit(int p, int y, float R);
    BankDeposit();
    void returnMoney(void)
    {
        cout << "money returns = " << returnValue << endl;
    }
};

BankDeposit::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r)*0.01;
    returnValue = principal;
    for (int i = 0; i < years; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}
BankDeposit::BankDeposit(int p, int y, float R)
{
    principal = p;
    years = y;
    interestRate = R;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + R);
    }
}
BankDeposit::BankDeposit()
{
    returnValue = 1000;
}
int main()
{
    int p, y, r;
    float R;
    cout << "enter principal years and interestrate ";
    cin >>p>>y>>r;

    BankDeposit b1(p, y, r);
    b1.returnMoney();
    
    cout << "enter principal years and interestrate ";
    cin >>p>>y>>R;
    BankDeposit b2(p,y,R);
    b2.returnMoney();

    return 0;
}