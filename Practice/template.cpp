#include<iostream>
using namespace std;

// template<typename T>
// T sum(T a,T b,T c){
//     return a+b+c;
// }

template<typename T>
class Pair{
    private:
    int size;
    T *arr;

    public:
    void set(int size){
        this->size=size;
        arr = new T[size];
        if ( arr != NULL){
            cout<<"Array is created successfully..."<<endl;
        }
        else{
            cout<<"Array is not created..."<<endl;
        }
    }

    void get(){
        cout<<"Collection is : "<endl;
        for(int i=0;i<size;i++){
            cout<<arr[i]<<endl;
        }
    }

    void add(int index,T ele){
        if(index>=0 && index<this->size){
            arr[index]=ele;
        }
        else{
            cout<<"Error in index value...."<<endl;
        }
    }
};

int main(){
    // int result=sum(5,5,5);
    // cout<<result;

    Pair<int> a;
    a.set(5);
    return 0;
}