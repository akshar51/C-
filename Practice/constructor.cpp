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
        this->id=7;
        cout<<"ID is : "<<this->id<<endl;
    }

    // //DESTRUCTOR
    ~City(){
        cout<<"Object is destroyed...."<<endl;
    }
};


int main(){
    City c1;
    City c2(3);
    City c3=c2;
    City c4(c3);
    

    cout<<c4.id<<endl;
    cout<<c2.id<<endl;
}