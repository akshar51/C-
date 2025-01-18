#include<iostream>
#include<string>
using namespace std;

class BankAccount{
    protected:
    int accountNumber;
    string accountHolderName;
    double balance;

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
        else if(amount>this->balance){
            cout<<"Not sufficient balance.."<<endl;
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
    double interestRate;

    public:
    SavingAccount(){
        this->interestRate=5;
    }
    void calculateInterest(){
        double interest=(this->balance * this->interestRate) / 100;
        this->balance+=interest;
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
    double interestRate;
    double balance;

    public:
    FixedDepositAccount(){
        this->term=12;
        this->interestRate=7;
        this->balance=0;
    }
    void deposit(double amount,int month){
        this->balance+=amount;
        this->term=month;
        cout<<"Fixed deposit of "<<amount<<" made for "<<term<<" month"<<endl;
    }
    void calculateInterest(){
        double interest=(this->balance * interestRate * term)/(100*12);
        cout<<term<<" month interest is : "<<interest<<endl;
    }
};





int main(){
    int choice;
    SavingAccount b;
    FixedDepositAccount c;
    
    do{
        cout<<"Press 1 for deposit "<<endl;
        cout<<"Press 2 for withdraw "<<endl;
        cout<<"Press 3 for balance "<<endl;
        cout<<"Press 4 for account info "<<endl;
        cout<<"Press 5 for saving account interest "<<endl;
        cout<<"Press 6 for deposit to fixed deposit "<<endl;
        cout<<"Press 7 for fixed deposit interest "<<endl;
        cout<<"Press 0 for exit "<<endl;

        cout<<"Enter your choice : ";
        cin>>choice;
        cout<<endl;

        switch(choice){
            case 1:
            int amount;
            cout<<"Enter deposit amount : ";
            cin>>amount;
            b.deposit(amount);
            cout<<endl;
            break;
            
            case 2:
            int money;
            cout<<"Enter withdraw amount : ";
            cin>>money;
            b.withdraw(money);
            cout<<endl;
            break;
            
            case 3:
            b.getbalance();
            break;
            
            case 4:
            b.displayAccountInfo();
            break;

            case 5:
            b.calculateInterest();
            cout<<endl;
            break;

            case 6:
            double amounts;
            int term;
            cout<<"Enter amount for fixed deposit : ";
            cin>>amounts;
            cout<<"Enter the term of fix : ";
            cin>>term;
            c.deposit(amounts,term);
            cout<<endl;
            break;

            case 7:
            c.calculateInterest();
            cout<<endl;
            break;

            case 0:break;

            default:
            cout<<"Invalid choice....."<<endl;

        }
    }while(choice!=0);
    return 0;
}