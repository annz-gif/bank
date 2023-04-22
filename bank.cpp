#include <iostream>
using namespace std;
class bank{
    char name[100];
    char address[100];
    char y;
    int amount;
    public:
    void open_account();
    void withdraw_money();
    void deposit_money();
    void display();
};
void bank:: open_account(){
    cout<<"enter your full name:"<<endl;
    cin.ignore();
    cin.getline(name,100);
    cout<<"enter your address:"<<endl;
    cin.ignore();
    cin.getline(address,100);
    cout<<"what type of account do you want to open saving or current?"<<endl;
    cin>>y;
    cout<<"enter amount you want to deposit:"<<endl;
    cin>>amount;
    cout<<"your account has been successfully created!"<<endl;

}
void bank::deposit_money(){
    int x;
    cout<<"enter amount you want to deposit:"<<endl;
    cin>>x;
    amount+=x;
    cout<<"account balance:"<<amount;
    } 
    void bank::withdraw_money(){
        float money;
        cout<<"enter amount you want to withdraw:"<<endl;
        cin>>money;
        amount= amount - money;
        cout<<"total amount:"<<amount;
        }
        void bank::display(){
            cout<<"your full name :"<<name;
            cout<<"your address:"<<address;
            cout<<"type of account:"<<y;
            cout<<"deposit amount "<<amount;
        }
int main(){
    int c;
    char k ;
    
    bank obj;
    do{
        
    cout<<"***WELCOME TO OUR BANK***"<<endl;
    cout<<"1)Open account"<<endl;
    cout<<"2)Deposit money"<<endl;
    cout<<"3)Withdraw money"<<endl;
    cout<<"4)Display account"<<endl;
    cout<<"5)Exit"<<endl;
    cout<<"enter your choice "<<endl;
    cin>>c;
    switch(c){
        case 1:
        cout<<"open account"<<endl;
        obj.open_account();
        break;
        case 2:
        cout<<"deposit money"<<endl;
        obj.deposit_money();
        break;
        case 3:
        cout<<"withdraw money"<<endl;
        obj.withdraw_money();
        break;
        case 4:
        cout<<"display account"<<endl;
        obj.display();
        break;
        case 5:
        if(c==5){
            exit(1);
        }
        default:
        cout<<"incorrect option selected"<<endl;
        cout<<"if you want to continue then press :y"<<endl;
        cout<<"if you want to exit then press:n"<<endl;
       // k=getc();
       cin>>k;
        
        if (k=='n'||k=='N'){
            cout<<"exit"<<endl;
        }
        exit(0);
        
    }
    }while(k=='y'||k=='Y');
    }