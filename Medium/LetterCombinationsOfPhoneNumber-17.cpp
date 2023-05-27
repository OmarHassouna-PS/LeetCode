#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:

    void backtrack (string digits, vector<string>& answer, vector<string> letter, int i, string word) {

        if (i == digits.length()) {
            answer.push_back(word);
            return;
        }
        for (char &c : letter[digits[i] - '0']) {
            backtrack(digits, answer, letter, i + 1, word + c);
        }
        
    }
    vector<string> letterCombinations(string digits) {
        
        vector<string> letter = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> answer = {};

        if (digits.length() == 0)
            return answer;
        backtrack(digits, answer, letter, 0, "");
        return answer;
    }
};

int main() {
    Solution Sum;
    vector<string> letter = Sum.letterCombinations("23");

    for (auto &&i : letter)
    {
        cout << i << ", ";
    } 

}
