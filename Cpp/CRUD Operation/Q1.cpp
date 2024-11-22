#include<iostream>
using namespace std;

int main(){
    //CRUD OPERTATION
    //C-CREATE
    //R-READ
    //U-UPDATE
    //D-DELETE

    int choice,size,pos,elem;
    cout<<"Enter array size :";
    cin>>size;
    int ar[size];
    

    for(int i=0;i<size;i++){
        cout<<"Enter element at ar["<< i <<"] = ";
        cin>>ar[i];
    }
    cout<<endl<<"-----------------"<<endl<<endl;

    

    do{
        cout<<"Press 1 for insert an array : "<<endl;
        cout<<"Press 2 for show an array : "<<endl;
        cout<<"Press 3 for update an array : "<<endl;
        cout<<"Press 4 for delete an array : "<<endl;
        cout<<"Press 0 for EXIT : "<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        cout<<endl;

        switch(choice){
        case 1:
        cout<<"Enter your index value : ";
        cin>>pos;
        cout<<"Enter your element value : ";
        cin>>elem;
        size++;
        for(int i=size-1;i>=pos;i--){
            ar[i+1]=ar[i];
        }
        ar[pos]=elem;
        break;

        case 2:
        cout<<"Array element is : ";
        for(int i=0;i<size;i++){
            cout<<ar[i]<<" ";
        }
        cout<<endl<<endl;
        break;

        case 3:
        break;

        case 4:
        break;

        case 0:
        break;

        default :
        cout<<"Enter valid choice....";
        

    }
    }while(choice != 0);

   

    

    
    
}
