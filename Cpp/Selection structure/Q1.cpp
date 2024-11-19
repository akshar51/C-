#include<iostream>
using namespace std;


int main(){
    int mark=86;
    if (mark>90){
        cout<<"A";
    }
    else{
            if (mark>80){
             if(mark>85){
                cout<<"A -";
                }
                else{
                cout<<"B+";
                }
            }
    else{
        if(mark>70){
            cout<<"C";
        }
        else{
            cout<<"D";
        }
    }
    return 0;
}
}