
//Longest Prefix Suffix

class Solution{
  public:		
	 int lps(string s) {
	 vector<int>LPS(s.size(),0);
	 int pre = 0;
	 int suff =1;
	 while(suff<s.size()){
	     if(s[pre]==s[suff]){
	         LPS[suff] =pre+1;
	         suff++;pre++;
	     }else{
	         
	         if(pre==0){
	              LPS[suff] = 0;suff++;
	         }
	         else {
	             pre = LPS[pre-1];
	             
	         }
	      }
	  }
	  return LPS[s.size()-1];
	}
};
