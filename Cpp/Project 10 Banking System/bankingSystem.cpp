#include<iostream>
#include<string>
using namespace std;

class BankAccount{
    int accountNumber;
    string accountHolderName;
    int balance;

    public:
    BankAccount(){
        this->accountNumber=123;
        this->accountHolderName="AKSHAR";
        this->balance=0;
    }

    public:
    void deposit(double amount){
        this->balance=this->balance+amount;
        cout<<"Deposit successfully..."<<endl;
    }

    void withdraw(double amount){
        if(amount==0){
            cout<<"Not sufficient balance..."<<endl;
        }
        else{
            this->balance=this->balance-amount;
            cout<<"Withdraw successfully..."<<endl;;
        }
    }

    void getbalance(){
        cout<<"Your balance is : "<<this->balance<<endl;
    }

    void displayAccountInfo(){
        cout<<"Account name is : "<<this->accountHolderName<<endl;
        cout<<"Account number is : "<<this->accountNumber<<endl;
        cout<<"Account balance is : "<<this->balance<<endl;
    }
};

class SavingAccount:public BankAccount{
    int interestRate;
    void calculateInterest(){
        
    }
};

class CheckingAccount:public BankAccount{
    int overdraftLimit;
    void checkOverdraft(){

    }
};

class FixedDepositAccount:public BankAccount{
    int term;
    void calculateInterest(){

    }
};





int main(){
    int choice;
    BankAccount a;
    do{
        cout<<"Press 1 for deposit "<<endl;
        cout<<"Press 2 for withdraw "<<endl;
        cout<<"Press 3 for balance "<<endl;
        cout<<"Press 4 for account info "<<endl;
        cout<<"Press 0 for exit "<<endl;

        cout<<"Enter your choice : ";
        cin>>choice;
        cout<<endl;

        switch(choice){
            case 1:
            int amount;
            cout<<"Enter deposit amount : ";
            cin>>amount;
            a.deposit(amount);
            cout<<endl;
            break;
            
            case 2:
            int money;
            cout<<"Enter withdraw amount : ";
            cin>>money;
            a.withdraw(money);
            cout<<endl;
            break;
            
            case 3:
            a.getbalance();
            break;
            case 4:break;
            case 0:break;
            default:
            cout<<"Invalid choice....."<<endl;

        }
    }while(choice!=0);
}