#include<iostream>
#include<cmath>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;
class customer{
    string name;
    int acc_no;
    int balance;
    public:
    customer(){  // default constructor
        cout<<"customer constructor called"<<endl;
    }
};

int main(){
    customer A1;
    return 0;
}

***********************************************************//
#include<iostream>
#include<cmath>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;
class customer{
    string name;
    int acc_no;
    int balance;
    public:
    customer(){  // default constructor
      name = "Ranjeet";
      acc_no = 100;
      balance = 10000000;
    }
    void display(){
        cout<<name<<" "<<acc_no<<" "<<balance<<endl;
    }
};

int main(){
    customer A1,A2;
    A1.display();
    A2.display();
    return 0;
}

//************************************************************//
// if function is same but parameters are different called constructor overloading 

#include<iostream>
using namespace std;
class customer{
    string name;
    int acc_no;
    int balance;
    public:
    customer(string a,int b,int c){ //parameterized constructor
      name = a;
      acc_no = b;
      balance = c;
    }
    
     customer(string a,int b){ //parameterized constructor
      name = a;
      acc_no = b;
    }
    
    void display(){
        cout<<name<<" "<<acc_no<<" "<<balance<<endl;
    }
};
int main(){
    customer A1("Ranjeet",11,11111);
    A1.display();
}


//************************************************// 

#include<iostream>
using namespace std;
class customer{
    string name;
    int acc_no;
    int balance;
    public:
    customer(string name,int acc_no,int balance){ //parameterized constructor
      this->name = name;
      this->acc_no = acc_no;
      this->balance = balance;
    }
    void display(){
        cout<<name<<" "<<acc_no<<" "<<balance<<endl;
    }
};
int main(){
    customer A1("Ranjeet",11,11111);
    A1.display();
}


//********************inline constructor ************************//

#include<iostream>
using namespace std;
class customer {
    string name;
    int acc_no;
    int balance;
public:
    // Inline parameterized constructor
  inline customer(string name, int acc_no, int balance) : name(name), acc_no(acc_no), balance(balance) {
    }
    void display() {
        cout << name << " " << acc_no << " " << balance << endl;
    }
};

int main() {
    customer A1("Ranjeet", 11, 11111);
    A1.display();
    return 0;
}

//*********************copy*****************************//
// A constructor that is use to copy or inialize the value of one object into another object is called copy constructor


#include<iostream>
using namespace std;
class customer {
int id;
public:
customer(int a){
     id = a;
}
customer(customer &x){
      id = x.id;
}
 
 void display(){
     cout<<"the value of x is "<<id<<endl;
 }
 
};

int main() {
   customer a(100);
   customer b(a); // copy constructor call method 1
   customer c = a; // copy constructor call method 1
   cout<<"display first object"<<endl;
   a.display();
   cout<<"display second object"<<endl;
   b.display();
   cout<<"display third object"<<endl;
   c.display();
}

//*********************************destructor************************************//
#include<iostream>
using namespace std;
class customer{
    string name;
    int *data;
    public:
    customer(){
        cout<<"constructor is called\n"<<endl;
    }
    ~customer(){
         delete data; // Free the allocated memory
         cout<<"destructor is called\n"<<endl;
    }
};
int main(){
    customer A1;
    return 0;
}



// constructor is called orderdwise and destructor is called reverse order

#include<iostream>
using namespace std;
class customer{
    string name;
    int *data;
    public:
    customer(string name){
        this->name = name;
        cout<<"constructor is"<<name<<endl;
    }
    ~customer(){
        
         cout<<"destructor is called\n"<<name<<endl;
    }
};
int main(){
    customer A1("1"),A2("2"),A3("3");
    return 0;
}

