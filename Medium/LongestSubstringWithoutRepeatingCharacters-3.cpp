#include <iostream>
#include <vector>
using namespace std;

class Solution {

public:

    int lengthOfLongestSubstring(string s) {

        int len = s.length();
        string temp = "";
        int length = 0;

        for (size_t i = 0; i < len; i++) {
            temp = s[i];

            for (size_t j = i+1; j < len; j++)
            {
                if (temp.find(s[j]) == std::string::npos) {
                    temp += s[j];
                }
                else {
                    break;
                }
            }
            if (temp.length() > length) {
                cout << temp << endl;
                length = temp.length();
            }
            temp = "";
        }
        
        return length;
    }
};

int main() {
    Solution Sum;
    cout << Sum.lengthOfLongestSubstring("anviajawertyxccxcciiccxccx");

    
    return 0;
}

/* class Solution {
public:
    bool CheckCharacterRepetition(char chr, string temp) {

        for (size_t i = 0; i < temp.length(); i++)
        {
            if (chr == temp[i]) {
               return false;
            }
        }
        return true;
        
    }

    int lengthOfLongestSubstring(string s) {

        int len = s.length();
        string temp = "";
        int length = 0;

        for (size_t i = 0; i < len; i++) {
            
            for (size_t j = i; j < len; j++)
            {
                if (CheckCharacterRepetition(s[j], temp)) {
                    temp += s[j];
                    if (temp.length() > length) {
                        length = temp.length();
                    }
                }
                else {
                    temp = "";
                }
            }
            temp = "";
        }
        return length;
    }
}; */