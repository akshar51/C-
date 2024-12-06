#include<iostream>
#include<string>
using namespace std;




class Student{
   public:
    static int roll;
    string name;
    int age;

    
    // void setdata(){
    //     cout<<"Roll no:";
    //     cin>>roll;
    //     cout<<"Name:";
    //     cin>>name;
    //     cout<<"Age:";
    //     cin>>age;
    // }

    // void getdata(){
    //     cout<<"Roll:"<<roll<<" "
    //         <<"Name:"<<name<<" "
    //         <<"Age:"<<age<<endl;
    // }

    static void getdata(){
        static int roll=55;
        cout<<roll<<endl;
    }


   
};

// class Myclass{
//     public:
//     static char name[50];
// };

// char Myclass::name[50]="akshar";



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

    // int x=50;
    // cout<<"Global x = "<<::x<<endl;
    // cout<<"Local x = "<<x<<endl;

    // cout<<Myclass::name<<endl;
    // cout<<Myclass::name<<endl;
 
    Student::getdata();

    // ::getdata();






}