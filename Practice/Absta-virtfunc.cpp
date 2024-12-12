#include<iostream>
using namespace std;


// ABSTRACT CLASS AND PURE VIRTUAL FUNCTION
// class A{
//     public:

//     // PURE VIRTUAL FUNCTON
//     virtual void movephone()=0; 
//     virtual void sidephone()=0; 

//     // CONCRETE METHOD
//     void calling(){
//         cout<<"Calling"<<endl;
//     }
// };

// class B : public A{
//     public:
//     void movephone(){
//         cout<<"Movephone"<<endl;
//     }
//     void sidephone(){
//         cout<<"Sidephone"<<endl;
//     }

// };

// class C : public B{
//     public:
//     void movephone(){
//         cout<<"phone"<<endl;
//     }
// };

class Vehicle{
    public:
    virtual void show(){
        cout<<"Running"<<endl;
    }
};

class Car : public Vehicle{
    public:
    void show(){
        cout<<"Car is red"<<endl;
    }
};

class Bike : public Car{
    public:
    void show(){
        cout<<"Bike is blue"<<endl;
    }
};


int main(){

    // C a;
    // a.calling();
    // a.movephone();
    // a.sidephone();


    Vehicle* a;
    Car b;
    Bike c;
    a=&c;
    a->show();
    b.show();



   



}