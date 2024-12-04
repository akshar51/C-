#include<iostream>
#include<string.h>
using namespace std;

class Student{
    public:
    int roll;
    char name[50];
    float percentage;
};

int main(){
    int num,i;
    Student stu1,stu2;
    stu1.roll=99;
    strcpy(stu1.name,"Akshar");

    cout<<"Roll number is : "<<stu1.roll<<endl;
    cout<<"Name is : "<<stu1.name<<endl;
    
    stu2.roll=100;
    strcpy(stu2.name,"Rahul");

    cout<<"Roll number is : "<<stu2.roll<<endl;
    cout<<"Name is : "<<stu2.name<<endl;

    stu1.roll=101;
    cout<<"Roll number is : "<<stu1.roll<<endl;
    

    for(int i=1;i<5;i++){
        cout<<"stu["<<i.roll<<"] = ";
        cin>>num;

    }

}




