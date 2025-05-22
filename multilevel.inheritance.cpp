#include<iostream>
using namespace std;
class student{
    protected:
    int roll_number;
    public:
    void get_number(int);
    void put_number(void);
};
void student::get_number(int a){
    roll_number=a;
}
void student::put_number(){
    cout<<"roll number "<<roll_number<<endl;
}
class test:public student{
    protected:
    float sub1;
    float sub2;
    public:
    void get_marks(float,float);
    void put_marks(void);
};
void test::put_marks(){
    cout<<" marks is sub1 = "<<sub1<<endl;
    cout<<" marks is sub2 = "<<sub2<<endl;
}
class result:public test{
    float total;
    public:
    void display(void);
};
void result::display(void){
    total=sub1+sub2;
    put_number();
    put_marks();
    cout<<"total = "<<total<<endl;
}
int main(){
    result student1;
    student1.get_number(111);
    student1.get_marks(75.0,56.5);
    student1.display();
    return 0;
}