#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {

public:
    bool CheckAnswer(vector<vector<int>> AnswerR, vector<int> AnswerA) {

        sort(AnswerA.begin(), AnswerA.end());
        int length = AnswerA.size(), count = 0;

        for (vector<int> &i : AnswerR) {
            count = 0;
            sort(i.begin(), i.end());
            for (size_t j = 0; j < length; j++) {

                if (i[j] == AnswerA[j]) {
                    count++;
                }
            }
            if (count == length) return false;
        }
        return true;
    }

    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int length = nums.size();
        vector<vector<int>> Answer = {};

        for (size_t i = 0; i < length; i++) {

            for (size_t j = i+1; j < length; j++) {
                
                for (size_t k = j+1; k < length; k++) {

                    if (nums[i] + nums[j] + nums[k] == 0 && (i != j && i != k && j !=k)) {
                        if (CheckAnswer(Answer, {nums[i], nums[j], nums[k]})) 
                            Answer.push_back({nums[i], nums[j], nums[k]});
                    }
                }
                
            }
        }
        return Answer;
    }
};


int main() {
    Solution Sum;
    vector<int> nums = {-9,-14,-3,2,0,-11,-5,11,5,-5,4,-4,5,-15,14,-8,-11,10,-6,1,-14,-12,-13,-11,9,-7,-2,-13,2,2,-15,1,3,-3,-12,-12,1,-2,6,14,0,-4,-13,-10,-12,8,-2,-8,3,-1,8,4,-6,2,1,10,2,14,4,12,1,4,-2,11,9,-7,6,-13,7,-3,8,14,8,10,12,11,-4,-13,10,14,1,-4,-4,2,5,4,-11,-7,3,8,-10,11,-11,-5,7,13,3,-2,8,-13,2,1,9,-12,-11,6};

    vector<vector<int>> sol = Sum.threeSum(nums);

    for (auto &i : sol)
    {
        for (auto &j : i)
        {
            cout << j << ", ";
        }
        cout << endl;
    }
}