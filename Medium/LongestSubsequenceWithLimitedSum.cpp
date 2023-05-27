#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    void BubbleSort (vector<int>& nums) {

        int temp = 0;
        for (size_t i = 0; i < nums.size(); i++) {
            bool IfNotChange = true;
            for (size_t j = 1; j < nums.size() - i; j++)
            {
                if (nums[j - 1] > nums[j]) {
                    temp = nums[j];
                    nums[j] = nums[j - 1];
                    nums[j - 1] = temp;
                    IfNotChange = false;
                }
            }
            if (IfNotChange){
                return;
            }
        }
    }

    int LinearSearch (vector<int>& nums, int Number) {
        BubbleSort(nums);
        int elm = 0,sum = 0;
        for (size_t i = 0; i < nums.size(); i++)
        {
            if (sum + nums[i] <= Number) {
                sum += nums[i];
                elm++;
            }
        }
        return elm;
    }

    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        
        vector<int> answer = {};
        for (size_t i = 0; i < queries.size(); i++) {

            answer.push_back(LinearSearch(nums, queries[i]));
            
        }
        return answer;
    }
};

int main() {

    Solution Str;
    vector<int> nums = {469781,45635,628818,324948,343772,713803,452081};
    vector<int> queries = {816646,929491};

    vector<int> answer = Str.answerQueries(nums, queries);

    for (auto &&i : answer)
    {
        cout << i << ", ";
    }
    
/*    Output
    [3,3,1,1,3,4,3]

    Expected
    [2,2,1,1,2,3,3] */

    return 0;
}