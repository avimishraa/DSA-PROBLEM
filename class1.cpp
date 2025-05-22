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
    employee emp[30];
    int n,i;
    cout<<"enter number of employees-";
    cin>>n;
    for(i=0;i<n;i++)
    emp[i].getdata();
    cout<<"employee data"<<endl;
    for(i=0;i<n;i++)
    emp[i].putdata();
    return 0;
}