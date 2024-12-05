#include<iostream>
#include<string>
using namespace std;


int x=100;

// class Student{
//    public:
//     int roll;
//     string name;
//     int age;

    
//     void setdata(){
//         cout<<"Roll no:";
//         cin>>roll;
//         cout<<"Name:";
//         cin>>name;
//         cout<<"Age:";
//         cin>>age;
//     }

//     void getdata(){
//         cout<<"Roll:"<<roll<<" "
//             <<"Name:"<<name<<" "
//             <<"Age:"<<age<<endl;
//     }
// };


int main(){
    // int size;
    // cout<<"Enter number of student : ";
    // cin>>size;
    // Student stud[size];

    // for(int i=0;i<size;i++){
    //     stud[i].setdata();
    // }

    // for(int i=0;i<size;i++){
    //     stud[i].getdata();
       
    // }

    int x=50;
    cout<<"Global x = "<<::x<<endl;
    cout<<"Local x = "<<x<<endl;
}