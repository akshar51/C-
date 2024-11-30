#include<iostream>
using namespace std;

int main(){
    // MINIMUM OF 3 GIVEN NUMBER
    int a,b,c,result;
    cout<<"Enter your first number : ";
    cin>>a;
    cout<<"Enter your second number : ";
    cin>>b;
    cout<<"Enter your third number : ";
    cin>>c;

    result=(a<b && a<c)?a:(b<c)?b:c;
    cout<<"Minimum is : "<<result;
}