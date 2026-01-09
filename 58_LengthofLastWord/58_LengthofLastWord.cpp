class Solution {
public:
    int lengthOfLastWord(string s) {
    while (!s.empty() && s.back() == ' ') {
        s.pop_back();
    }
        for (int i = s.size(); i >= 0; i--){
            if (s[i] == ' '){
                return s.size() - i - 1;
            }
        }
        return s.size();
    }
};