

*******************Pair*************************************
#include<bits/stdc++.h>
using namespace std;
int main(){
        pair<string,int>p;
        p = make_pair("rohit",30);
        p.first = "rohit";
        p.second = 20;
     cout<<p.first<<" "<<p.second<<endl;
}

********************************************************

#include<bits/stdc++.h>
using namespace std;
int main(){
     pair<string,pair<int,int>>p;
     p.first = "ranjeet";
     p.second.first = 40;
     p.second.second = 20;
     p=make_pair("Ranjeet",make_pair(20,24));
     cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
}

********************list**************************************
l.push_back()
l.push_front()
l.pop_back()
l.pop_front()
l.front()
l.back()
l.size();

for(list<int>::iterator it = l.begin(); it !=l.end();it++){
     cout<<*it<<endl;
}

// 20 20 20 20 20
#include<bits/stdc++.h>
using namespace std;
int main(){
     list<int>l1; // it is a doubly linked list
     l1.push_back(20);
     l1.push_back(20);
     l1.push_front(10);
     l1.push_front(11);
     cout<<l1.front()<<" "<<l1.back()<<endl;
     cout<<l1.size();
      for(auto it = l1.begin(); it !=l1.end();it++){
       cout<<*it<<endl;
     }
}

************************** set****************************************
        
// only unique values will be stored
// store values in sorted order (asending)
// insertion , deletetion,and search oparation have the tc O(logn) making the fast for most use cases
// generally impltemented using red-balck tree
// we can sort it in desecnding order also using greater<int>
// set<int>l1; 
//set<int,greater<int>>l1; 
// if(s.find(x) !=s.end()) return iterator
//  if(s.count(x)) return true or false;
// s.erase();
// s.size();
// s.insert()

#include<bits/stdc++.h>
using namespace std;
int main(){
     // set<int>l1; 
      set<int,greater<int>>l1; 
      l1.insert(20);
      l1.insert(10);
      l1.insert(30);
      l1.insert(40);
      l1.insert(50);
      for(auto it = l1.begin(); it !=l1.end();it++){
      cout<<*it<<endl;
     }
}

***********************************  multiset*********************************

// duplicate elements can be but sorted ordered
// using multset also red black tree
        
#include<bits/stdc++.h>
using namespace std;
int main(){
      multiset<int,greater<int>>l1; 
      l1.insert(20);
      l1.insert(10);
      l1.insert(30);
      l1.insert(40);
      l1.insert(50);
      l1.insert(50);
      l1.insert(50);
      for(auto it = l1.begin(); it !=l1.end();it++){
      cout<<*it<<endl;
     }
}

**************************** unordered_set********************************
// it cantains only unique element 
// search delete and insert have avg constant tc 
// implemented using hashing 
        
#include<bits/stdc++.h>
using namespace std;
int main(){
      unordered_set<int>l1; 
      l1.insert(20);
      l1.insert(10);
      l1.insert(30);
      l1.insert(40);
      l1.insert(50);
      for(auto it = l1.begin(); it !=l1.end();it++){
      cout<<*it<<endl;
     }
}

****************************** unordered_multise********************************
// it cantains duplicate  elements 
// search delete and insert have avg constant tc 
// implemented using hashing 
        
#include<bits/stdc++.h>
using namespace std;
int main(){
      unordered_multiset<int>l1; 
      l1.insert(20);
      l1.insert(10);
      l1.insert(30);
      l1.insert(40);
      l1.insert(50);
      l1.insert(50);
      l1.insert(50);
      for(auto it = l1.begin(); it !=l1.end();it++){
       cout<<*it<<endl;
     }
}

