#include<iostream>
using namespace std; 

class student{
    protected:
    int roll_No;
    public:
    void roll(int x){
        roll_No = x;
    }
    void get_roll(void){
        cout<<"the roll number : "<<roll_No<<endl;
    }
};

class Exam : public student{
    protected:
    float physics;
    float math;
    public:
    void marks(float x,float y){
        physics = x;
        math = y;
    }
    void getMar
};

class result : public Exam{
    public:
    float calcpercentage(void){
        return (physics+math)/2;
    }
};
int main(){
    result R;
    R.roll(59);
    R.get_roll();
    R.marks(93,94);
    cout<<"the percentage is "<< R.calcpercentage()<<"%"<<endl;
    
    return 0;
}