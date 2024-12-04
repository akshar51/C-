#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
    int grid;
    string name;
    int age;

    public:
    //Setter
    void setdata(int grid,string name,int age){
        this->grid=grid;
        this->name=name;
        this->age=age;
    }

    //Getter

    void getdata(){
        cout<<"Grid: "<<grid<<" "
            <<"Name: "<<name<<" "
            <<"Age: "<<age;
    }

};



int main(){

    Student stud1,stud2,stud3;

    stud1.setdata(777,"Akshar",20);
    stud2.setdata(888,"Nyan",55);
    
    
   


}