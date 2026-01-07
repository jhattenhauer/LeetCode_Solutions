#include <string>
#include <iostream>

class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        int len_word = needle.size();
        int len_stack = haystack.size();

        if (needle == haystack){return 0;}
        
        for (int i = 0; i + len_word < len_stack + 1; i++){
            int to = i + len_word;
            int from = i;
            std::string window = haystack.substr(from, to - from);
            std::cout << window << std::endl;
            if (window == needle){
                return i;
            }
        }

        return -1;
    }
};
