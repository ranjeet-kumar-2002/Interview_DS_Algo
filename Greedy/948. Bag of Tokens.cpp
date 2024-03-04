//948. Bag of Tokens
class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int i = 0;
        int j = tokens.size()-1;
        sort(tokens.begin(),tokens.end());
        int maxscore = 0;
        int score = 0;
        while(i<=j){
            if(power>=tokens[i]){
                power = power-tokens[i];
                score ++;
                i++;
                maxscore = max(score,maxscore);
            }
             else if(score>=1){
                power +=tokens[j];
                score--;
                j--;
            }else return maxscore;
        }
        return maxscore;
    }
};
