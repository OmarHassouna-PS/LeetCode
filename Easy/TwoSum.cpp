#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int Length = nums.size();
        vector<int> answer = {};
        for (size_t i = 0; i < Length; i++)
        {
            for (size_t j = i+1; j < Length; j++)
            {
                if (nums[i]+nums[j] ==  target) {
                    answer.push_back(i);
                    answer.push_back(j);
                    return answer;
                }
            }
        }
        return answer;

    }
};
int main() {
    Solution Sum;
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> answer = Sum.twoSum(nums, target);

    for (int &i : answer)
    {
        cout << i << ", ";
    }
    
    return 0;
}