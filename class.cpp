#include<iostream>
using namespace std;
class employee{
    int id;
    char name[50];
    public:
    void getdata();
    void putdata();

};
void employee::getdata(){
cout<<"enter id"<<endl;
cin>>id;
cout<<"name"<<endl;
cin>>name;
}
void employee::putdata(){
    cout<<id<<endl;
    cout<<name<<endl;


}
int main(){
    employee emp;
    emp.getdata();
    emp.putdata();
    return 0;
}