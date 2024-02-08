#include<bits/stdc++.h>
using namespace std;
int main() {
  char ch[10];
  cin>>ch;
  cout<<ch;
}


#include<bits/stdc++.h>
using namespace std;
int main() {
  char ch[10];
  cin>>ch;
  ch[2]='\0';
  cout<<ch;
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
