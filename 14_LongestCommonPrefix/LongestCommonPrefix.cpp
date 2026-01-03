class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    string first = strs[0];
    string prefix;
    bool partOfPrefix = true;
        for (int i = 0; i < first.size(); i++){
            partOfPrefix = true;
            for (int j = 0; j < strs.size(); j++){
                if (strs[j][i] != first[i]) {
                    partOfPrefix = false;
                    return prefix;
                }
            }
            if (partOfPrefix == true) {
                prefix.push_back(first[i]);
            }
        }
        return prefix;
    }
};