#include<iostream>
using namespace std; 

int sumo(int a,int b){
    static int c = 0; //this execute only ones if loop repeated or not.
    c = a*b + c ; //Next time this function is run,the value of c will be retained.
    return c;

}


inline int dsumo(int a,int b){
    // Not recommended to use below lines with inline function
    //static int c = 0; //this execute only ones if loop repeated or not.
    int c = 0;
    c = a*b + c ; 
    return c;

}

int moneyrecieved(int money,float factor = 1.04)//the value of factor is 1.04 is default value when actual parametre missing then function take default value.and all default value make sure at extreme right position.

{
    return money*factor;
}

int main(){
    cout<<"the value of c is "<<sumo(3,4)<<endl;
     cout<<"the value of c is "<<sumo(3,4)<<endl;
      cout<<"the value of c is "<<sumo(3,4)<<endl;
       cout<<"the value of c is "<<sumo(3,4)<<endl;
        cout<<"the value of c is "<<sumo(3,4)<<endl;
    return 0;
}