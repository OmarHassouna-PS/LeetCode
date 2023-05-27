#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {

        sort(costs.begin(),costs.end());
        int length = costs.size();
        long long sum = 0, CountMax = 0; 

        for (size_t i = 0; i < length; i++) { 

            if ((sum += costs[i]) <= coins) {
                CountMax++;
            }
            else
                break;
        }
        return CountMax;
    }
};
int main() {
    Solution Sum;
    vector<int> nums = {1,6,3,1,2,5};
    cout << Sum.maxIceCream(nums, 20);
}