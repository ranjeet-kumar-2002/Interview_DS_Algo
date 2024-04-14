// string(1,ch); conversion char to string in cpp
//string count_str = to_string(count);  conversion int to string
// s=="abcdef"  s.substr(0,3) == "abc" 
//string s1 = "Geeks" --> string r = s1.substr(3, 2);  == ks -->s1.substr(pos,len); 
// int N = 97; cout << char(N);   number to char conversion typecasting
//s1==s2; if two string are same it will give true else false;
// for the uppercase char = ch-32 for the lowercase char = ch+32;
//int stoi(string str, size_t position = 0, int base = 10);  // convert string to integer
//int stoi(string str, size_t position = 0, int base = 2);  // convert binary string to integer -->stoi(binaryString, 0, 2);
//toi(binaryString, 0, 2)==toi(binaryString, nullptr, 2);

//************************* binary to decimal*********************************//

#include<bits/stdc++.h>
using namespace std;
int main() {
    // Example usage
    string binaryString = "1101"; // Replace with your binary string
    cout<<stoi(binaryString, 0, 10); // binary to integer
}

// **************************binary to integer ************************************

#include<bits/stdc++.h>
using namespace std;
int main() {
    // Example usage
    string binaryString = "1101"; // Replace with your binary string
    cout<<stoi(binaryString, 0, 2);  // it will give the binary to decimal
}



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

************************sort the given string********************************

  string sort(string s){
   sort(s.begin(),s.end());
   return s;
}
