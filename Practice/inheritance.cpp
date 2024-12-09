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
class Animal{
    public:
    void eat(){
        cout<<"Animal is eating"<<endl;
    }
};

class Dog:public Animal{
    public:
    void sleep(){
        cout<<"Dog is sleeping"<<endl;
    }
};

class Pitbull:public Dog{
    public:
    void bark(){
        cout<<"Pitbull is barking"<<endl;
    }
};

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
    

}