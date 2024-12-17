#include<iostream>
#include<vector>
using namespace std;

// class func{
//     private:
//     vector<int> v={10,20,30};

//     public:
//     void add(int ele){
//         v.push_back(ele);
//     }

//     void update(int index,int ele){
//         if(index>=0 && index<v.size()){
//             v.at(index)=ele;
//         }
//         else{
//             cout<<"Invalid index value out of bound."<<endl;
//         }
        
//     }

//     void deleteEle(int index){
//         if(index>=0 && index<v.size()){
//             v.erase(v.begin()+index);
//         }
//         else{
//             cout<<"Invalid index value out of bound."<<endl;
//         }
//     }

//     void view(){
//         cout<<"Vector is : ";
//         for(int i=0;i<v.size();i++){
//             cout<<v[i]<<" ";
//         }
//         cout<<endl;
//     }
// };


int main(){

    // SYNTAX OF VECTOR

    // SYNTAX 1
    vector<int> v;// EMPTY VECTOR

    // SYNTAX 2
    // vector<data-type> vector-name(size,element)
    vector<int> v1(5,99);//VECTOR WITH INITIALIZATION

    // SYNTAX 3
    vector<int> v2{10,20,30,40,50};

    cout<<v2[0]<<endl;
    cout<<v2[1]<<endl;
    cout<<v2[2]<<endl;
    cout<<v2[3]<<endl;
    cout<<v2[4]<<endl;


    // PROGRAM OF CRUD 

    // func a;
    // int index,ele,choice;

    // do{
    //     cout<<"Press 1 for add an element"<<endl;
    //     cout<<"Press 2 for update an element"<<endl;
    //     cout<<"Press 3 for delete an element"<<endl;
    //     cout<<"Press 4 for add view element"<<endl;
    //     cout<<"Press 0 for exit "<<endl;

    //     cout<<"Enter your choice : ";
    //     cin>>choice;
    //     cout<<endl;

    //     switch(choice){
    //         case 1:
    //         cout<<"Enter an element :";
    //         cin>>ele;
    //         a.add(ele);
    //         cout<<"Added successfully."<<endl;
    //         cout<<endl;
    //         break;

    //         case 2:
    //         cout<<"Enter index value : ";
    //         cin>>index;
    //         cout<<"Enter an element : ";
    //         cin>>ele;
    //         a.update(index,ele);
    //         cout<<"Updated successfully."<<endl;
    //         cout<<endl;
    //         break;

    //         case 3:
    //         cout<<"Enter index value : ";
    //         cin>>index;
    //         a.deleteEle(index);
    //         cout<<endl;
    //         break;


    //         case 4:
    //         a.view();
    //         cout<<endl;
    //         break;

    //         case 0:
    //         break;

    //         default:
    //         cout<<"Invalid choice....."<<endl;
    //         cout<<endl;
    //         break;
    //     }
    // }while(choice!=0);

    

}