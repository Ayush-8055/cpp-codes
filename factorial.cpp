#include<iostream>
using namespace std; 

int facto(int n);

int main(){
    int x;
    cout<<"enter the value :"<<endl;
    cin>>x;
    cout<<"factorial of "<<x<<"is : "<<facto(x)<<endl;
    return 0;
}

int facto(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    return n * facto(n-1);
}