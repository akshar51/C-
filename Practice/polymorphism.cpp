#include<iostream>
using namespace std;

//POLYMORPHISM

//METHOD OVERLOADING
// class animal{
//     public:
//     void lion(){
//         cout<<"lion is eating."<<endl;
//     }

//     void lion(int n){
//         cout<<"lion has "<<n<<" legs"<<endl;
//     }

//     void lion(int n,int q){
//         cout<<"lion has "<<n<<" legs and "<<q<<" ears "<<endl;
//     }
// };



//METHOD OVER-RIDING
class India{
    public:
    void wear(){
        cout<<"Dhoti"<<endl;
    }
};

class Pak : public India{
    public:
    void wear(){
        cout<<"Pathani"<<endl;
    }
};


int main(){
    // animal a;
    // a.lion();
    // a.lion(4);
    // a.lion(4,2);

    // Pak a;
    // a.wear();
   
   India *a;
   India a1;
   Pak a2; 
   a=&a1;
   a->wear();
   a2.wear();

}