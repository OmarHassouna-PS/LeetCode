#include <iostream>
#include <vector>
using namespace std;

class Solution {

public:
    int minDeletionSize(vector<string>& strs) {

        int r = strs[0].length();
        int c = strs.size();
        int Count = 0;

        for (size_t i = 0; i < r; i++) {
            
            for (size_t j = 1; j < c; j++)  {

                if (strs[j-1][i] > strs[j][i]) {

                    Count++;
                    break;
                }
                
            }
        }
        return Count;
    }
};

int main() {
    Solution Sum;
    vector<string> s = {"cba","daf","ghi"};
    cout << Sum.minDeletionSize(s);
    
    return 0;
}