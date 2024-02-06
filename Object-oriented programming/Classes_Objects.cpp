
// It is approach or a programming pattern where the programs are structures around the object rather than fuction and logic


#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;
    int age,roll_no;
    string grade;
    cin>>name>>age>>roll_no>>grade;

    string name1;
    int age1,roll_no1;
    string grade1;
    cin>>name1>>age1>>roll_no1>>grade1;
}


#include<bits/stdc++.h>
using namespace std;
class student{  // CLASS
    public:   // ACCESS MODIFYER {public,private,protected}
    string name;
    int age,roll_no;
    string grade;
};
int main(){
    
    student s1;  // OBJECT OF STUDENT CLASS
    s1.name = "ranjeet";
    s1.age = 21;
    s1.roll_no = 106;
    s1.grade = "A+";
    cout<<s1.name<<endl;
    student s2;  // OBJECT OF STUDENT CLASS
    s2.name = "ranjeet";
    s2.age = 21;
    s2.roll_no = 106;
    s2.grade = "A+";
    cout<<s2.name<<endl;
}

////////////////////////////////////////////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;
class student{  // CLASS
    private:// ACCESS MODIFYER {public,private,protected}
    string name;
    int age,roll_no;
    string grade;
    // function Getter and Setter
    public:
    void setName(string n){
       name = n;
    }
    
     void setAge(int n){
        age = n;
    }
    
     void setRoll(int n){
        roll_no = n;
    }
    
    
    void getname(){
        cout<<name<<endl;
    }
    
     void getage(){
        cout<<age<<endl;
    }
    
    int getRoll(){
        return roll_no;
    }
};
int main(){
    
    student s2;  // OBJECT OF STUDENT CLASS
    s2.setName("hello");
    s2.setAge(11);
    s2.setRoll(111);
    s2.getname();
    s2.getage();
    cout<<s2.getRoll();
}

/////////////////////////////////////////////////////padding concept////////////////////////////////


#include <iostream>
using namespace std;
class a{
    int b;
};
int main() {
   a obj;
   cout<<sizeof(obj)<<endl; //4
}


#include <iostream>
using namespace std;
class a{
    int b;
    char c;
};
int main() {
   a obj;
   cout<<sizeof(obj)<<endl; //8 why it is using concept of padding
}

#include <iostream>
using namespace std;
class a{
    char d;
    int b;
    char c;
};
int main() {
   a obj;
   cout<<sizeof(obj)<<endl; //12
}

////////////////// dynamic memory allocation///////////////////////////////////


#include<bits/stdc++.h>
using namespace std;
class student{  // CLASS
    public:   // ACCESS MODIFYER {public,private,protected}
    string name;
    int age,roll_no;
    string grade;
};
int main(){
    
    student *s1 = new student;  // OBJECT OF STUDENT CLASS
    (*s1).name = "ranjeet";
    (*s1).age = 21;
    (*s1).roll_no = 106;
    (*s1).grade = "A+";
    cout<<(*s1).age<<endl;
    cout<<s1->age<<endl;
   
}
