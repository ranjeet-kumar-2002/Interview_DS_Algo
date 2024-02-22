//step1:first find the no of unique char in the given string
//step2: for sliding window for uniquecount
//step3: while uniquecount exits means while uniquechar count not equal to zero
// step4:if uniquecount == 0 means we can check our window size and try to compress

****Smallest distinct window**
class Solution{
    public:
    int findSubString(string str){
        //step1:first find the no of unique char in the given string
        vector<bool>visited(250,false); //String may contain both type of English Alphabets for all char
        int first=0;
        int uniqueCount = 0;
        while(first<str.size()){
             if(visited[str[first]]==false){
                 uniqueCount++;
             }
             visited[str[first]]=true;
             first++;
        }
        
        // step2: for sliding window for uniquecount
          int len = str.size();
          vector<int>count(250,0);
          int i = 0;
          int j = 0;
          while(j<str.size()){
             //step3: while uniquecount exits
             while(uniqueCount && j<str.size()){
                 if(count[str[j]]==0){
                     uniqueCount--;
                 }
                 count[str[j]]++;
                 j++;
             }
             // step4:if uniquecount == 0 means we can check our window size and try to compress
             while(uniqueCount!=1){
                 len = min(len,j-i);
                 count[str[i]]--;
                 if(count[str[i]]==0){
                     uniqueCount++;
                 }
                 i++;
             }
          }
          return len;
    }
};
