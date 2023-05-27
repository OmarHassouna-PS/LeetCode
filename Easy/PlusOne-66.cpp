#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int len = digits.size();
        vector<int> sum = {};

        if (digits[len - 1] < 9) {
            digits[len - 1] += 1;
            return digits;
        }
        else if (len == 1 && digits[len - 1] == 9) {
            digits[len - 1] = 1;
            digits.push_back(0);
            return digits;
        }
        

        for (int i = 0; i < len-1; i++) {

            if (digits[len-i-1] == 9 && digits[len-i-2] < 9) {
                digits[len-i-1] = 0;
                digits[len-i-2] += 1;
                return digits;

            }
            else if (digits[len-i-1] == 9) {
                digits[len-i-1] = 0;
            }
        }
        digits[0] = 1;
        digits.push_back(0);
        return digits;
    }
};

int main() {
    Solution suma;

    vector<int> sum = {9,9,9,9}; // 9, 0, 9, 0, 9, 0, 9
    vector<int> s = suma.plusOne(sum);

    for (auto &&i : s)
    {
        cout << i << ", ";
    }
    

    return 0;
}