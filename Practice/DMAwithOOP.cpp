#include<iostream>
using namespace std;

class Myclass{
  private:
  int size;
  int *arr;

  public:
  //CONSTRUCTOR
  Myclass(int size){
    this->size=size;
    arr=new int[size];
    if(arr==NULL){
        cout<<"Allocation is failed"<<endl;
    }
    else{
        cout<<"Allocation successful"<<endl;
    }
  }

  //DESTRUCTOR  
  ~Myclass(){
    delete[]arr;
    arr=NULL;
    if(arr==NULL){
        cout<<"Deallocation successful"<<endl;
    }
    else{
        cout<<"Deallocation failed"<<endl;
    }
  }  

  void add
};



int main(){
    Myclass obj(5);

}