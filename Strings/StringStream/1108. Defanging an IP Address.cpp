
class Solution {
public:
    string defangIPaddr(string address) {
        stringstream ss(address);
        string token;
        string ans = "";

        while (getline(ss, token, '.')) {
            ans += token + "[.]";
        }

        // Remove the extra "[.]" at the end
        return ans.substr(0,ans.size()-3);
    }
};
