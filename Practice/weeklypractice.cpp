#include<iostream>
#include<string>
using namespace std;

// SETTER AND GETTER
// class A{
//     private:
//     int roll;
//     int age;
//     string name;
//     public:
//     //Setter
//     void setdata(int roll,int age,string name){
//         this->roll=roll;
//         this->age=age;
//         this->name=name;
//     }
//     //Getter
//     void getdata(){
//         cout<<"Roll number is : "<<this->roll<<endl;
//         cout<<"Age is : "<<this->age<<endl;
//         cout<<"Name is : "<<this->name<<endl;
//     }
// };

// ----------------------------------------------

// ARRAY OF OBJECT
// class stud{
//     public:
//     int roll;
//     int age;
//     static string name;
//     public:
//     //Setter
//     void setdata(){
//         cout<<"Roll no : ";
//         cin>>roll;
//         cout<<"Age : ";
//         cin>>age;
//         // cout<<"Name : ";
//         // cin>>name;
//     }
//     //Getter
//     void getdata(){
//         cout<<"Roll number is : "<<this->roll<<" ";
//         cout<<"Age is : "<<this->age<<" ";
//         cout<<"Name is : "<<this->name<<endl;
//     }
// };
// //STATIC VALUE DECLARE
// string stud::name="DSA";

//----------------------------------------------------

//  CONSTRUCTOR AND DESTRUCTOR
// class A{
//     public:
//     int id;
//     string name;

//     // DEFAULT CONSTRUCTOR
//     A(){
//         id=13;
//         cout<<"ID is : "<<id<<endl;
//         name="DSA";
//         cout<<"Name is : "<<name<<endl;
//     }

//     // PARAMETERIZED CONSTRUCTOR
//     A(int id,string name){
//         this->id=id;
//         cout<<"ID is : "<<id<<endl;
//         this->name=name;
//         cout<<"Name is : "<<name<<endl;
//     }

//     // COPY CONSTRUCTOR
//     A(A &ob){
//         this->id=55;
//         this->name="DSA";
//         //cout<<"ID is "<<this->id<<endl;
//         //cout<<"Name is "<<this->name<<endl;
//     }

//     // DESTRUCTOR
//     ~A(){
//         cout<<"Constructor deleted successfully...."<<endl;
//     }   
// };
//--------------------------------------------

// INHERITANCE

// SINGLE INHERITANCE
// class Animal{
//     public:
//     void dog(){
//         cout<<"Dog is barking"<<endl;
//     }
// };
// class Pet: public Animal{
//     public:
//     void eat(){
//         cout<<"Pet is eating"<<endl;
//     }
// };
    
// MULTI-LEVEL INHERITANCE
// class A{
//     public:
//     void eat(){
//         cout<<"A Dog is eating."<<endl;
//     }
//  };

//  class B : public A{
//     public:
//     void sleep(){
//         cout<<"B Dog is sleeping."<<endl;
//     }
//  };
//  class C : public B{
//     public:
//     void walk(){
//         cout<<"C Dog is walking."<<endl;
//     }
//  };

// MULTIPLE INHERITANCE

// class A{
//     public:
//     void setdata(){
//         string name;
//         cout<<"Enter ur name : ";
//         cin>>name;
//     }
// };
// class B{
//     public:
//     void getdata(){
//         cout<<"Input successfull.....";
//     }
// };
// class C : public A , public B{
//     public:
//     void final(){
//     setdata();
//     getdata();
//     }
    
// };

int main(){

    // SETTER AND GETTER
    // A a;
    // a.setdata(1,18,"Akshar");
    // a.getdata();

//--------------------------------------------

    // ARRAY OF OBJECT
    // int size;
    // cout<<"Enter number of student : ";
    // cin>>size;
    // stud a[size];

    // for(int i=0;i<size;i++){
    //     a[i].setdata();
    // }

    // for(int i=0;i<size;i++){
    //     a[i].getdata();
    // }
//--------------------------------------------

    // CONSTRUCTOR & DESTRUCTOR
    // A ob;
    // A h(99,"Akskar");
    // cout<<h.id<<" ";
    // cout<<h.name<<endl;
    // A s;
    // h=A(h); // Object name = copy constructor name (object name)
    // cout<<h.id<<" ";
    // cout<<h.name<<endl;
//-------------------------------------

// INHERITANCE
// SINGLE INHERITANCE
    // Pet a;
    // a.dog();
    // a.eat();

// MULTI-LEVEL INHERITANCE
//     C a;
//     a.eat();
//     a.sleep();
//     a.walk();

// MULTIPLE INHERITANCE
    // C a;
    // a.final();
}
