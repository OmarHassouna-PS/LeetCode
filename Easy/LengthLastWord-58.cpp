#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:

    int lengthOfLastWord(string s) {
        
        string answer = "";
        for (size_t i = 0; i < s.length(); i++) {
            
            if (isalpha(s[i])) {
                answer += s[i];
            }
            else if (s[i] == ' ' && isalpha(s[i+1])) {
                answer = "";
            }
        }
        return answer.length();
        
    }
};

int main() {
    Solution Sum;

    cout << Sum.lengthOfLastWord("    c He  d ");
    


}

