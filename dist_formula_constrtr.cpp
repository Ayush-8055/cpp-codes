#include <iostream>
#include <math.h>
using namespace std;

class point
{
    friend int distofPoint(point o1,point o2);
    int a;
    int b;

public:
    point(int x, int y);
    void printData(void)
    {
        cout << "the coordinate is (" << a << "," << b << ")" << endl;
    }
};

point ::point(int x, int y)
{
    a = x;
    b = y;
}

int distofPoint(point o1,point o2){
    int r = pow((o1.a) - (o2.a),2);
    int s = pow((o1.b) - (o2.b),2);

    int res = pow((r+s),0.5);
    return res;
    
}

int main()
{
    int m,n,p,q;
    cout<<"enter the x cordinate of first point ";
    cin>>m;
     cout<<"enter the y cordinate of first point ";
    cin>>n;
     cout<<"enter the x cordinate of secound point ";
    cin>>p;
     cout<<"enter the y cordinate of secound point ";
    cin>>q;

    point p1(m, n), p2(p, q);
    p1.printData();
    p2.printData();
    int result = distofPoint(p1,p2);
    cout<<"the distance between the point is "<<result<<endl;
    return 0;
}