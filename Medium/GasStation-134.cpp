#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:

    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int Len = cost.size(), TotalGas = 0, TotalCost = 0, Sum = 0, Res = 0;

        for (size_t i = 0; i < Len; i++) {
            TotalGas += gas[i];
            TotalCost += cost[i];
        }

        if (TotalGas < TotalCost)
            return -1;
        
        for (size_t i = 0; i < Len; i++) {
            Sum += gas[i] - cost[i];
            if (Sum < 0) {
                Sum = 0;
                Res = i + 1; 
            }
        }
        return Res;
    }
};

int main() {
    Solution Sum;
    vector<int> gas =  {5,1,2,3,4};
    vector<int> cost = {4,4,1,5,1};
                    //  1-3 1-2 3
    cout << Sum.canCompleteCircuit(gas, cost);

}
