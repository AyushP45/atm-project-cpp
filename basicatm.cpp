#include<iostream>
using namespace std;
float balance=0;
float amount;
void display_money(){
    cout<<"Your bank balance is:"<<balance;
}
void Deposite_money(){
    cout<<"Enter the amount:";
    cin>>amount;
    if(amount>0){
        balance+=amount;
        cout<<"Amount deposited succesfully.."<<"\n";
    }
    else{
        cout<<"Enter valid amount..!"<<"\n";
    }
}
void Withdraw_money(){
    cout<<"Enter the amount:";
    cin>>amount;
    if(amount<=balance&&amount>0){
        balance-=amount;
    }else{
        cout<<"Insufficent balance or Invalid amount..!"<<"\n";
    }
}
int main(){
    int pin,userpin;
    int choice;
    float amount;
    cout<<"Set your pin:";
    cin>>pin;
    cout<<"Enter your starting Balance:";
    cin>>balance;
    cout<<"Please Enter your pin for starting transaction:";
    cin>>userpin;
    if(pin==userpin){
        while(1){
            cout<<"\nBANK MENU:"<<"\n";
            cout<<"1.Display Bank Balance"<<"\n";
            cout<<"2.Deposit money"<<"\n";
            cout<<"3.Withdraw money"<<"\n";
            cout<<"4.Exit"<<"\n";
            cout<<"Enter your choice:";
            cin>>choice;
            switch(choice){
                case 1:display_money();
                    break;
                case 2:Deposite_money();
                    break;
                case 3:Withdraw_money();
                   break;
                 case 4:
                   cout<<"Thank you for visiting ATM..!"<<"\n";
                   exit(0);
                 default:
                    cout<<"Please enter correct choice(1-4)..!"<<"\n";
            }
        }
    }
    else{
        cout<<"Invalid Activity..!Please Enter correct pin."<<"\n";
    }
    return 0;
}    
