#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        if (nums.size() <= 1) {
            return {nums};
        }

        vector<vector<int>> answer = {};
        int len = nums.size();

        for (int i = 0; i < len; ++i) {
            vector<int> temp(nums.begin(), nums.end());
            temp.erase(temp.begin() + i);
            vector<vector<int>> Res = permute(temp);

            for (int j = 0; j < Res.size(); ++j) { 
                    vector<int> temp2 = Res[j];
                    temp2.insert(temp2.begin(), nums[i]);
                    answer.push_back(temp2);
            }
        }
        return answer;
    }
};

int main() {
    Solution Sum;
    vector<int> nums = {1,2,3};
    vector<vector<int>> a =  Sum.permute(nums);

    for (auto &&i : a)
    {
        for (auto &&n : i)
        {
            cout << n;
        }
        cout << endl;
        
    }
    
    


}
