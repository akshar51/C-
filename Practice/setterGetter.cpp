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
            <<"Age: "<<age<<endl;
    }

    Student *getcurrent(){
        return this;
    }

};

// class Bank{
//     private:
//     int balance=1000;

//     public:
//     void code(int x){
//         if(x==123){
//             cout<<"Account balance is : "<<balance;
//         }
//         else{
//             cout<<"Invalid code....";
//         }
//     }
// };



int main(){

    Student stud1,stud2,stud3;

    stud1.setdata(777,"Akshar",20);
    stud2.setdata(888,"Nyan",55);

    stud1.getdata();
    stud2.getdata();
    
    stud3=*stud1.getcurrent();
    stud3.getdata();
   
//    Bank bal;
//    bal.code(123);


}