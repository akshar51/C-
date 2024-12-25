#include<iostream>
using namespace std;

class A{
    public:
    int size;
    int* arr;

    // CONSTRUCTOR
    A(int size){
        this->size=size;
        arr=new int[size];
        for(int i=0;i<size;i++){
            cout<<"arr["<<i<<"] = ";
            cin>>arr[i];
        }
        if(arr==NULL){
            cout<<"Memory allocation is not successfull"<<endl;
        }
        else{
            cout<<"Memory allocation successfull"<<endl;
        }
    }

    // DESTRUCTOR
    ~A(){
        delete[] arr;
        arr=NULL;
        if(arr==NULL){
            cout<<"Memory deallocation successfull"<<endl;
        }
        else{
            cout<<"Memory deallocation not successfull"<<endl;
        }
    }

};

int main(){
    A a(5);
}