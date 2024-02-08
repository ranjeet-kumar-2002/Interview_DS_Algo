
string sort(string s){
  vector<int>mp(26,0);
  for(int i =0;i<s.size();i++){
      mp[s[i]-'a']++;
  }
  string ans = "";
  for(int i =0;i<mp.size();i++){
      char ch = i+'a';
      while(mp[i]--){
          ans+=ch;
      }
  }
  return ans;
}
