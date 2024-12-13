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

    //INSERTING ELEMENT ------------CRUD----------- 
    void addelement(int index,int ele){
        if(index>=0 && index<this->size){
            arr[index]=ele;
            cout<<"Element added successfull"<<endl;
        }
        else{
            cout<<"Error in index position...."<<endl;
        }
  }

  // DISPLAY ELEMENT AT INDEX  --------CRUD----------

  void getelement(int index){
    if(index>=0 && index<this->size){
        cout<<"Value at index "<<index<<" is "<<arr[index]<<endl;
    }
    else{
        cout<<"Error in index"<<endl;
    }
  }
};



int main(){

    int arr[]={1,2,3,4};
   // cout<<arr[0];
    Myclass obj(5);
    obj.addelement(4,99);
    obj.getelement(0);

}