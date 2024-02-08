
string sort(string s){
  vector<int>mp(26,0); //O(26)
  for(int i =0;i<s.size();i++){ //O(n)
      mp[s[i]-'a']++;
  }
  string ans = "";
  for(int i =0;i<mp.size();i++){   //O(n)
      char ch = i+'a';
      while(mp[i]--){
          ans+=ch;
      }
  }
  return ans;
}
