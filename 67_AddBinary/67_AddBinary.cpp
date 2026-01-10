#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        char carry = '0';
        int end_a = a.size() - 1;
        int end_b = b.size() - 1;
        char char_a, char_b;
        string output = "";

        while (end_a >= 0 || end_b >= 0) {

            if (end_a >= 0) {
                char_a = a[end_a--];
            } else {
                char_a = '0';
            }

            if (end_b >= 0) {
                char_b = b[end_b--];
            } else {
                char_b = '0';
            }

            int ones = (char_a == '1') + (char_b == '1') + (carry == '1');

            if (ones % 2 == 1)
                output.push_back('1');
            else
                output.push_back('0');

            if (ones >= 2){
                carry = '1';
            } else {
                carry = '0';
            }
        }

        if (carry == '1')
            output.push_back('1');

        reverse(output.begin(), output.end());
        return output;
    }
};
