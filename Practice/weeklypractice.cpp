#include<iostream>
#include<string>
using namespace std;

// SETTER AND GETTER

class A{
    private:
    int roll;
    int age;
    string name;
    public:
    //Setter
    void setdata(int roll,int age,string name){
        this->roll=roll;
        this->age=age;
        this->name=name;
    }
    //Getter
    void getdata(){
        cout<<"Roll number is : "<<this->roll<<endl;
        cout<<"Age is : "<<this->age<<endl;
        cout<<"Name is : "<<this->name<<endl;
    }

};


int main(){

    A a;
    a.setdata(1,18,"Akshar");
    a.getdata();

}