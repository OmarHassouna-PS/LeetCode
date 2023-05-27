#include <iostream>
#include <vector>
using namespace std;

class Solution {

public:

    string longestCommonPrefix(vector<string>& strs) {

        int length = strs.size(), Count = 0;
        string LongestCommon = "";
        
        for (size_t i = 0; i < strs[0].length(); i++) {
            Count = 0;
            for (size_t k = 1; k < length; k++) {

                if (strs[0][i] == strs[k][i]) {
                    Count++;
                }
            }
            if (Count == length-1)
                LongestCommon += strs[0][i];
            else
                break;
        }
        return LongestCommon;
        
    }
};


int main() {
    Solution Sum;
    vector<string> strs = {"cir","car"};
    cout << Sum.longestCommonPrefix(strs) << "\n";
}