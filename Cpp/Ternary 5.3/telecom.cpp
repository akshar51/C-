#include<iostream>
using namespace std;

int main(){

    int choice;

    cout<<"Press 1 for English."<<endl;
    cout<<"Press 2 for Hindi."<<endl;
    cout<<"Press 3 for Gujarati."<<endl<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    cout<<endl;

    switch(choice){
        case 1 :
        cout<<"Press 1 for Internet recharge"<<endl;        
        cout<<"Press 2 for Top-up recharge"<<endl;        
        cout<<"Press 3 for Special recharge"<<endl<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1 :
            cout<<"You have successfull done a Internet recharge.";
            break;

            case 2 :
            cout<<"You have successfull done a Top-up recharge.";
            break;

            case 3 :
            cout<<"You have successfull done a Special recharge."<<endl;
            break;
        }        
        break;

        case 2 :
        cout<<"Internet recharge ke liye 1 dabaiye"<<endl;
        cout<<"Top-up recharge ke liye 2 dabaiye"<<endl;
        cout<<"Special recharge ke liye 3 dabaiye"<<endl<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        cout<<endl;
          switch(choice){
            case 1 :
            cout<<"Aapne safaltapurvak Internet recharge kar liye he.";
            break;

            case 2 :
            cout<<"Aapne safaltapurvak Top-up recharge lar liye he.";
            break;

            case 3 :
            cout<<"Aapne safaltapurvak Special recharge lar liye he."<<endl;
            break;
        } 
        break;

        case 3 :
        cout<<"Internet recharge mate 1 dabavo"<<endl;
        cout<<"Top-up recharge mate 2 dabavo"<<endl;
        cout<<"Special recharge mate 3 dabavo"<<endl<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        cout<<endl;
          switch(choice){
            case 1 :
            cout<<"Tame safaltapurvak Internet recharge karyu che.";
            break;

            case 2 :
            cout<<"Tame safaltapurvak Top-up recharge karyu che.";
            break;

            case 3 :
            cout<<"Tame safaltapurvak Special recharge karyu che."<<endl;
            break;
        } 
        break;
    }
}