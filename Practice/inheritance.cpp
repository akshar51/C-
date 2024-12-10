#include<iostream>
using namespace std;

//SINGLE INHERITANCE
// class Animal{
//     public:
//     void eat(){
//         cout<<"Tiger is eating"<<endl;
//     }
// };

// class tiger: public Animal{
//     public:
//     void sleep(){
//         cout<<"Tiger is sleeping"<<endl;
//     }
// };


//MULTI-LEVEL INHERITANCE
// class Animal{
//     public:
//     void eat(){
//         cout<<"Animal is eating"<<endl;
//     }
// };

// class Dog:public Animal{
//     public:
//     void sleep(){
//         cout<<"Dog is sleeping"<<endl;
//     }
// };

// class Pitbull:public Dog{
//     public:
//     void bark(){
//         cout<<"Pitbull is barking"<<endl;
//     }
// };


//MULTIPLE INHERITANCE
// class Engine{
//     public:
//     char engine_name[50]="VB";
// };

// class wheel{
//     public:
//     char wheel_name[50]="MRF";
// };

// class car : public Engine , public wheel{
//     public:
//     void make(){
//         cout<<"A new car is prepare with engine "<<engine_name<<" and wheel is of "<<wheel_name<<endl;
//     }
// };


//HIERARCHICAL INHERITANCE
// class Animal{
//     public:
//     void eat(){
//         cout<<"Tiger is eating"<<endl;
//     }
// };

// class tiger: public Animal{
//     public:
//     void sleep(){
//         cout<<"Tiger is sleeping"<<endl;
//     }
// };

// class lion:public Animal{
//     public:
//     void sleep(){
//         cout<<"Lion is sleeping"<<endl;
//     }
// };


//HYBRID INHERITANCE
// class A{
//     public:
//     void tiger(){
//         cout<<"Tiger is eating"<<endl;
//     }
// };

// class B : public A{
//     public:
//     void lion(){
//         cout<<"lion is eating"<<endl;
//     }
// };

// class C : public A{
//     public:
//     void cheetah(){
//         cout<<"Cheetah is eating"<<endl;
//     }
// };

// class D : public B,public C{
//     public:
//     void leopard(){
//         cout<<"Leopard is eating"<<endl;
//     }
// };




int main(){
    //SINGLE INHERITANCE
    // tiger A;
    // A.eat();
    // A.sleep();


    //MULTI-LEVEL INHERITANCE
    // Pitbull A;
    // A.eat();
    // A.sleep();
    // A.bark();


    //MULTIPLE INHERITANCE
    // car A;
    // A.make();


    //HIERARCHICAL INHERITANCE
    // lion c;
    // tiger t;
    
    // c.eat();
    // t.eat();
    
    // c.sleep();
    // t.sleep();

    //HYBRID INHERITANCE
    // D a;
    // a.C::tiger();
    // a.B::tiger();
    // a.cheetah();
    // a.lion();
}