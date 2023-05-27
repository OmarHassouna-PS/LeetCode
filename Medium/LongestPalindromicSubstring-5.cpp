#include <iostream>
#include <vector>
using namespace std;

class Solution {

public:

    bool IsPalindrome (string str1) {

        string str2 = str1;
        int LengthStr = str1.length();

        for (size_t k = 0; k < LengthStr / 2; k++) {
            
            if (str1[k] != str2[LengthStr - k - 1]) {
                return false;
            }
        }     
        return true;   
    }

    string longestPalindrome(string s) {
        
        int len = s.length();
        string temp1 = "", answer = "";
        int length = 0;
        answer = s[0];

        if (len <= 1) return answer = s[0];
        
        if (IsPalindrome(s)) return s;
        
        for (size_t i = 0; i < len; i++) {
            temp1 = s[i];

            for (size_t j = i+1; j < len; j++)
            {
                temp1 += s[j];
                if (s[j] == s[i]) {
                                       
                    if (IsPalindrome(temp1)) {
                        if (temp1.length() > answer.length()) {
                            answer = temp1;
                        }
                    }
                }
            }
        }
        return answer;
    }
};


int main() {
    Solution Sum;
    string chr = "aaabaaaa";
    cout << Sum.longestPalindrome(chr) << "\n";

    string str2 = chr;
    string str1 = "";
    int length = str2.length()/2;

    if (str2.length()%2 == 0) {

        str1 = str2.substr(0, length);
        str2.erase(0, length); 
    }
    else {
        str1 = str2.substr(0, length);
        str2.erase(0, length+1); 
    }
    string answe = "";
    int left = 0, regt = 0;
    for (size_t i = 0; i < length; i++) {
        if((str1[i] & str2[i])) {
            
        }
    }
    





    
    return 0;
}