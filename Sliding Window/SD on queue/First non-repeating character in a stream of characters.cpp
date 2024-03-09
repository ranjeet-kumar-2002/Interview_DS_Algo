//First non-repeating character in a stream of characters

string Solution::solve(string A) {
    string ans = "";
    queue<char>q;
    vector<int>count(26,0);
    for(int i =0;i<A.size();i++){
        if(count[A[i]-'a']>=1) {  // reapeated 
           count[A[i]-'a']++;
           while(!q.empty() && count[q.front()-'a']>1){
               q.pop();
           }
           if(q.empty()) ans +='#';
           else ans +=q.front();
        }else {  // non reapeated
             count[A[i]-'a']++;
             q.push(A[i]);
             ans +=q.front();
        }
        
    }
    return ans;
}
