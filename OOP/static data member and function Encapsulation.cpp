#include<iostream>
using namespace std;
class customer{
    string name;
    int acc_no,balance;
    static int total_customer;
    static int total_balance;
    public:
    customer(string name,int acc_no,int balance){
        this->name = name;
        this->acc_no = acc_no;
        this->balance = balance;
        total_customer++;
        total_balance +=balance;
    }
    void display(){
        cout<<name<<" "<<acc_no<<" " <<balance<<endl;
    }
   static void display_total(){
        cout<<total_customer<<endl;
        cout<<total_balance<<endl;
    }
   void deposit(int amount){
      if(amount>0){
           balance +=amount;
           total_balance +=amount;
      }
    }
    void widthraw(int amount){
      if(amount<=balance && amount>0){
           balance -=amount;
           total_balance -=amount;
      }
    }
};
int customer::total_customer=0;
int customer::total_balance=0;
int main(){
    customer a1("ranjeet",106,10);
    customer a2("RANJEET",107,11);
    customer a3("RANJEET",108,12);
    a2.deposit(100);
    a2.widthraw(100);
    a2.display_total();
    return 0;
}
//*************************Encampsulation************************************//
#include<iostream>
using namespace std;
class customer{
    string name;
    int acc_no,balance,age;
    static int total_customer;
    static int total_balance;
    public:
    customer(string name,int acc_no,int balance,int age ){
        this->name = name;
        this->acc_no = acc_no;
        this->balance = balance;
        this->age = age;
        total_customer++;
        total_balance +=balance;
    }
    void display(){
        cout<<name<<" "<<acc_no<<" " <<balance<<endl;
    }
   static void display_total(){
        cout<<total_customer<<endl;
        cout<<total_balance<<endl;
    }
   void deposit(int amount){
      if(amount>0){
           balance +=amount;
           total_balance +=amount;
      }else {
           cout<<"invalid amount\n"<<endl;
      }
    }
    void updateage(int age){
         if(age>0 && age<100){
             this->age = age;
         }else{
             cout<<"Invalid age"<<endl;
         }
    }
    void widthraw(int amount){
      if(amount<=balance && amount>0){
           balance -=amount;
           total_balance -=amount;
      }else{
            cout<<"invalid amount\n"<<endl;
      }
    }
    
};
int customer::total_customer=0;
int customer::total_balance=0;
int main(){
    customer a1("ranjeet",106,10,4);
    customer a2("RANJEET",107,11,8);
    customer a3("RANJEET",108,12,14);
    a2.deposit(100);
    a2.widthraw(100);
    a2.display_total();
    return 0;
}
