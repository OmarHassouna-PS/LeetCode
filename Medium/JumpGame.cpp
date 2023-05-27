#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int Max (int Num1, int Num2) {
        if (Num1 > Num2)
            return Num1;
        return Num2;
    }
    bool canJump(int nums[], int length) {
        int Reachable = 0;
        for (size_t i = 0; i < length; i++)
        {
            if (Reachable < i)
                return false;
            Reachable = Max(Reachable, i+nums[i]);
        }
        return true ;
    }
};

int main() {
    Solution Game;
    int nums[] = {1, 1, 2, 5, 2, 1, 0, 0, 1, 3};

    cout << Game.canJump(nums, sizeof(nums)/sizeof(nums[0]));
    return 0;
}