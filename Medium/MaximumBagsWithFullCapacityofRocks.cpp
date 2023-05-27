#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:

   int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int length =  rocks.size();
        int maximum = 0;
        for (size_t i = 0; i < length; i++)
        {
            capacity[i] -= rocks[i];
        }
        sort(capacity.begin(),capacity.end());

        for (size_t j = 0; j < length; j++)
        {
            if (additionalRocks >= capacity[j]) {
                maximum++;
                additionalRocks -= capacity[j];
            }
            else 
                break;
        }
        return maximum;
    }

};
int main() {
    Solution SumRocks;

    vector<int> capacity = {91,54,63,99,24,45,78};
    vector<int> rocks =    {35,32,45,98,6 ,1 ,25};
                          //56 22 18 1  18 44 53
    int additionalRocks  = 17;

    cout << SumRocks.maximumBags(capacity, rocks, additionalRocks) << endl; // 13

    
    return 0;
}