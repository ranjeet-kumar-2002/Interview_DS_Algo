#include<bits/stdc++.h>
using namespace std;
int main() {
  char ch[10];
  cin>>ch;
  cout<<ch;
}
*******************taking input with the space******************
#include<bits/stdc++.h>
using namespace std;
int main() {
   string s;
   getline(cin,s);
   cout<<endl;
}

**********************push_back() and pop_back()*****************************
#include<bits/stdc++.h>
using namespace std;
int main() {
   string s1 ="hello";
   s1.pop_back();
   cout<<s1;
}


#include<bits/stdc++.h>
using namespace std;
int main() {
  char ch[10];
  cin>>ch;
  ch[2]='\0';
  cout<<ch;
}
************************* concate*******************************
#include<bits/stdc++.h>
using namespace std;
int main() {
   string s1 ="hello";
   string s2="hi";
  cout<<s1+s2;
}


************************excape character**************************
#include<bits/stdc++.h>
using namespace std;
int main() {
  string s = "ranjeet is \"good\" coder;
  cout<<s;
  cout<<"\\0"<<endl;
}

******************************** Reverse*************************************8

#include<bits/stdc++.h>
using namespace std;
int main() {
 string s = "Ranjeet";
 int i = 0;
 int j = s.size()-1;
 while(i<=j){
     swap(s[i],s[j]);
     i++;
     j--;
 }
 cout<<s;
}


*********************polimdrome**************************************
#include<bits/stdc++.h>
using namespace std;
int main() {
 string s = "naman";
 int i = 0;
 int j = s.size()-1;
 while(i<=j){
     if(s[i] !=s[j]){
         cout<<"not a polimdrome"<<endl;
         break;
     }
     i++;
     j--;
 }
 cout<<"a polimdrome"<<endl;
}
