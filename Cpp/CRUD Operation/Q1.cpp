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
        // INSERT
        case 1:
        cout<<"Enter your index value for insert : ";
        cin>>pos;
        cout<<"Enter your element value : ";
        cin>>elem;

        if(pos<0){
            cout<<"Enter valid index value..."<<endl;
        }
        else{
        size++;
        for(int i=size-1;i>=pos;i--){
            ar[i+1]=ar[i];
        }
        }
        ar[pos]=elem;
        cout<<endl;
        break;

        // SHOW
        case 2:
        cout<<"Array element is : ";
        for(int i=0;i<size;i++){
            cout<<ar[i]<<" ";
        }
        cout<<endl<<endl;
        break;

        // UPDATE
        case 3:
        cout<<"Enter your position value for update : ";
        cin>>pos;
        cout<<"Enter your element value : ";
        cin>>elem;

        if(pos>=size+1){
            cout<<"Enter valid position... "<<endl;
        }
        else{
            for(int i=1;i<=size;i++){
                if(i == pos){
                    ar[i-1]=elem;
                }
            }
        }
        cout<<endl;
        break;

        // DELETE
        case 4:
        cout<<"Enter your position value to delete : ";
        cin>>pos;
        if(pos>=size+1){
            cout<<"Enter valid position..."<<endl;
        }
        else{
            for(int i=pos-1;i<size-1;i++){
                ar[i]=ar[i+1]; 
            }
        size--;
        }
        cout<<endl;
        break;

        case 0:
        cout<<"You have successfully EXIT ...";
        break;

        default :
        cout<<"Enter valid choice...."<<endl<<endl;
    }
    }while(choice != 0);

   

    

    
    
}
