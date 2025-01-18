#include<iostream>
#include<string>
using namespace std;

class BankAccount{
    protected:
    int accountNumber;
    string accountHolderName;
    int balance;

    public:
    BankAccount(){
        this->accountNumber=123;
        this->accountHolderName="AKSHAR";
        this->balance=0;
    }

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
        cout<<"Your balance is : "<<this->balance<<endl<<endl;
    }

    void displayAccountInfo(){
        cout<<"Account name is : "<<this->accountHolderName<<endl;
        cout<<"Account number is : "<<this->accountNumber<<endl;
        cout<<"Account balance is : "<<this->balance<<endl<<endl;
    }
};

class SavingAccount : public BankAccount{
    int interestRate;
    public:
    SavingAccount(){
        this->interestRate=5;
    }
    void calculateInterest(){
        double interest=(this->balance * interestRate)/100;
        cout<<"Interest is : "<<interest<<endl;
    }
};

class CheckingAccount : public BankAccount{
    int overdraftLimit;
    public:
    CheckingAccount(){
        this->overdraftLimit=500;
    }
    void checkOverdraft(){
        cout<<"Over draft limit is : "<<this->overdraftLimit<<endl;
    }
};

class FixedDepositAccount : public BankAccount{
    int term;
    int interestRate;
    public:
    FixedDepositAccount(){
        this->term=12;
        this->interestRate=7;
    }
    void calculateInterest(){
        int interest=(this->balance*interestRate*term)/(100*12);
        cout<<term<<" month interest is : "<<interest<<endl;
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
            
            case 4:
            a.displayAccountInfo();
            break;

            case 0:break;
            default:
            cout<<"Invalid choice....."<<endl;

        }
    }while(choice!=0);
    return 0;
}