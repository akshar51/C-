#include<iostream>
#include<algorithm>
using namespace std;

class A{
    public:
    int size;
    int* arr;
    
    // INSERT FIVE VALUE IN DMA ARRAY
    A(int data){
        this->size=data;
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

    // POSITION OF GIVEN VALUE
    void pos(int index){
        if(index>=0 && index<this->size){
            cout<<"Element at index "<<index<<" is "<<arr[index]<<endl;
        }
        else{
            cout<<"Invalid index value..."<<endl;
        }
    }

    // SORTING AN ARRAY IN ASCENDING ORDER
    void ascending(){
        
        sort(arr,arr+this->size);
        for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    }
    
   
};


int main(){
    A a(5);
    a.pos(3);
    a.ascending();

}