#include <iostream>
#include <vector>
using namespace std;

class Solution {

public:

    vector <string> Split (string str, string delim) {

        vector <string> vWord;
        short pos = 0;
        string sWord = "\0";
        
        while ((pos = str.find(delim)) != std::string::npos) {

            sWord = str.substr(0, pos);
            if (sWord != "") {
                vWord.push_back(sWord);
            }
            str.erase(0, pos + delim.length()); 
        }

        if (str != "") {
            vWord.push_back(str);
        }
        return vWord;
    }

    bool wordPattern(string pattern, string s) {
        vector <string> word =  Split(s, " ");
        short length = pattern.length();
        if (length != word.size()) return false;

        for (size_t i = 0; i < length - 1; i++) {
            
            for (size_t j = i+1; j < length; j++) {
                if ( pattern[i] != pattern[j] && word[i] != word[j]) 
                    continue;
                else if ( pattern[i] == pattern[j] && word[i] == word[j])
                    continue;
                else
                    return false;
            }
        }
        return true;
    }
};

int main() {
    Solution Sum;
    cout << Sum.wordPattern("abba", "dog cat cat dog");
    
    return 0;
}