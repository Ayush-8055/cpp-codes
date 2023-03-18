#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void inhitcounter(void) { counter = 0; } //very useful when we use multiple objects
    void setprice(void);
    void displayprice(void);
};

void shop::setprice(void)
{
    cout << endl
         << "Enter the itemId  ";
    cin >> itemId[counter];
    cout << endl
         << "Enter the item Price  ";
    cin >> itemPrice[counter];
    counter++;
}

void shop::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the Price of Item Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    shop s1;
    s1.inhitcounter();
    int n;
    while(1){
        cout<<"1.setPrice \n2.DisPlayPrice\n3.Exit"<<endl;
        cin>>n;
        switch (n)
        {
        case 1: s1.setprice();
            break;
        
        case 2:  s1.displayprice();
            break;

        case 3: exit(0);

        default: cout<<"Choose right keyword"<<endl;
            break;
        }
    }
    

    return 0;
}