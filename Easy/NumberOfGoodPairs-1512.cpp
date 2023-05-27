#include <iostream>
#include <vector>
using namespace std;

class Solution {

public:
    int numIdenticalPairs(vector<int>& nums) {

/*         int count = 0;
        for (size_t i = 0; i < nums.size(); i++) {

            for (size_t j = 1; j < nums.size(); j++) {
                if (nums[i] == nums[j] && i < j) {
                    count++;
                }
            }
        }
        return count; */
        
        int arr[101] = {0};
        int sum = 0;

        for (int x : nums) 
            ++arr[x];

        for (int i = 0; i < nums.size(); ++i) {
            sum += arr[i] * (arr[i] - 1) / 2;
        }
        return sum;

    }
};
int main() {
    Solution Sum;
    vector<int> nums = {1,2,3,1,1,3};
    cout << Sum.numIdenticalPairs(nums);
    
    return 0;
}