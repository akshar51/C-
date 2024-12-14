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

// ARRAY OF OBJECT

class stud{
    public:
    int roll;
    int age;
    static string name;
    public:
    //Setter
    void setdata(){
        cout<<"Roll no : ";
        cin>>roll;
        cout<<"Age : ";
        cin>>age;
        // cout<<"Name : ";
        // cin>>name;
    }
    //Getter
    void getdata(){
        cout<<"Roll number is : "<<this->roll<<" ";
        cout<<"Age is : "<<this->age<<" ";
        cout<<"Name is : "<<this->name<<endl;
    }
};
//STATIC VALUE DECLARE
string stud::name="DSA";

int main(){

    // SETTER AND GETTER
    // A a;
    // a.setdata(1,18,"Akshar");
    // a.getdata();


    // ARRAY OF OBJECT
    int size;
    cout<<"Enter number of student : ";
    cin>>size;
    stud a[size];

    for(int i=0;i<size;i++){
        a[i].setdata();
    }

    for(int i=0;i<size;i++){
        a[i].getdata();
    }


}