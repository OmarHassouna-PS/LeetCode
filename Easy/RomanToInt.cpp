#include <iostream>
using namespace std;

class Solution {
public:
    int CharacterNumber (char chr) {
        switch (chr)
        {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;                
        }
    }
    
    int Sum = 0;

    int romanToInt(string s) {
        for (size_t i = 0; i < s.length(); i++) {
            if (s[i] == 'I' &&  (s[i+1] == 'V' || s[i+1] == 'X')) {
                Sum += CharacterNumber(s[i+1]) - 1;
                i++;
            }
            else if (s[i] == 'X' &&  (s[i+1] == 'L' || s[i+1] == 'C')) {
                Sum += CharacterNumber(s[i+1]) - 10;
                i++;
            }
            else if (s[i] == 'C' &&  (s[i+1] == 'D' || s[i+1] == 'M')) {
                Sum += CharacterNumber(s[i+1]) - 100;
                i++;
            }
            else {
                Sum += CharacterNumber(s[i]);
            }
        }
        return Sum;
    }
};

int main() {

    Solution Str;

    cout << Str.romanToInt("MCMXCIV");
    return 0;
}