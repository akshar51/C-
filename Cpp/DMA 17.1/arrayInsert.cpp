#include<iostream>
using namespace std;

class A{
    public:
    int size;
    int* arr;

    // DMA ARRAY
    A(int size){
        this->size=size;
        arr=new int[size];
        for(int i=0;i<this->size;i++){
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

    // INSERTING VALUE USING FUNCTION
    void addEle(int index,int ele){
        if(index>=0 && index<this->size){
            arr[index]=ele;
        }
        else{
            cout<<"Enter valid index value..."<<endl;
        }
    }

    // DISPLAY ARRAY
    void display(){
        for(int i=0;i<this->size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }


};



int main(){
    A b(5);
    b.display();
    b.addEle(2,99);
    b.display();
}