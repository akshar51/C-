#include<iostream>
using namespace std;

class City{
    public:
    int id;

    // DEFAULT CONSTRUCTOR
    City(){
        this->id=5;
        cout<<"ID is : "<<id<<endl;      
    }

    //PARAMETERIZED CONSTRUCTOR
    City(int n){
        id = n;
        cout<<"PARAMETERIZED ID is : "<<id<<endl;
    }

    //COPY CONSTRUCTOR
    City(City &obj){
        
    }

    // //DESTRUCTOR
    // ~City(){
    //     cout<<"Object is destroyed...."<<endl;
    // }
};


int main(){
    City c1;
    City c2(3);
    City c3(c2);
}