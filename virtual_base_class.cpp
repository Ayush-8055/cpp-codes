#include<iostream>
using namespace std; 

/*
student ----> test
student ----> sports
test ---> results
sports ---> results 
*/
class student{
    protected:
    int roll;
    public:
    void set_number(int x){
        roll = x;
    } 
    void print_number(){
        cout<<"The Roll Number is "<<roll<<endl;
    }

};

class test : virtual public student{
    protected:
    float physics,math;
    public:
    void set_marks(int x,int y){
        physics = x;
        math = y;
    }
    void print_marks(){
        cout<<"the marks of physics "<<physics<<endl;
        cout<<"the marks of math "<<math<<endl;
    }

};

class sports : virtual public student{
    protected:
    float score;
    public:
    void set_score(float sc){
        score = sc;
    } 
    void print_score(){
        cout<<"your PT score is "<<score<<endl;
    }
};

class results : public test,public sports{
     private:
     float total;
    public:
     void display(void){
        float total = physics+math+score;
         print_number();
         print_marks();
         print_score();
        cout<<"The Total Marks is "<<total<<endl<<" And percentage is "<<total/4<<"%"<<endl;
     }
};
int main(){
    results R;
    R.set_number(61);
    R.set_marks(48,64);
    R.set_score(100);
    R.display();
    return 0;
}