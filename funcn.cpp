#include<iostream>
using namespace std;

int sum(int n);
int sum_(int n);
void g(void);

int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;

    cout<<sum(n)<<endl;// call by value it takes the actual parametre and trasfer a copy to the formal parametre so when we create changes in formal parameter actual parametre remain same.
    cout<<sum_(n);
    g();
    return 0;

}

int sum(int n)
{
   int a = n*(n+1)/2;
   return a;
}

int sum_(int n)
{
    int sum = 0;
    for(int i=1; i<=n; i++)
    {
        sum = sum + i ;
    }

    return sum;


}

void g(void)
{
    cout<<"\nHello! Good morning"<<endl;
}