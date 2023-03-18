#include<iostream>
using namespace std;

int main()
{
    int pocket = 3000;
    for(int date=1; date<30; date++)
    {
        if(date % 2 == 0)
        {
            continue;
        }
        cout<<"go out";
        pocket = pocket-30;
    }
    return 0;
}