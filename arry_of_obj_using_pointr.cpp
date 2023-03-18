#include<iostream>
using namespace std; 

class shop{
    int id;
    float price;
    public:
    void setData(int a,float b){
        id = a;
        price = b;
    }
    void display(){
        cout<<"code of this item "<<id<<endl<<" price of the item "<<price<<endl; 
    }
};
int main(){
    int size;
    cout<<"enter the size "<<endl;
    cin>>size;

    shop *ptr = new shop[size];
    for(int i=0; i<size; i++){
        int x;
        float y;
        cout<<"enter the id"<<"["<<i+1<<"]";
        cin>>x;
        cout<<"Enter the price"<<"["<<i+1<<"]";
        cin>>y;
        (ptr+i)->setData(x,y); // instead of use ptr++ we use this 
        // because when we do ptr++ then ptr increment and before going next for loop ptr cross the limit 
        // of our dynamically allocated memory

        // 1     2      3       |
        // |                    |
        // |                    |   
        // |                    |
        // ^
        // ptr  ptr++  ptr++  ptr++

    }

    for(int i=0; i<size; i++){
        (ptr+i)->display();
    }
    return 0;
}