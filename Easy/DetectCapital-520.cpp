#include <iostream>
#include <vector>
using namespace std;

class Solution {

public:

    bool detectCapitalUse(string word) {
        
        for (size_t i = 1; i < word.length(); i++) {
            
            if (isupper(word[0])) {
                if (isupper(word[1])) 
                    if (isupper(word[i]))
                        continue;
                    else
                        return false;
                else if (islower(word[1])) {
                    if (islower(word[i]))
                        continue;
                    else
                        return false;
                }
            }
            else {
                if (isupper(word[i])) 
                    return false;
            }
        }
        return true;
    }
};

int main() {
    Solution Sum;
    cout << Sum.detectCapitalUse("mL");
    
    return 0;
}

/*
    int a=0;
    int b=0;
    if(isupper(word[0])){
          a++;
    }
    for( int i=1;i<word.size();i++){
        if(isupper(word[i])){
            b++;
        }
    } 
    if(a==1 && b==0 ||a==1 && b==word.size()-1 || a==0 && b==0){
        return true;
    }
    else{
        return false;
    }

    ***

    for(int i = 1; i < word.size(); i++){
        if(isupper(word[1]) != isupper(word[i]) || 
           islower(word[0]) && isupper(word[i])) return false;
    }        
    return true;

    ***

    int upper = 0;
    int lower = 0;
    for (auto i:word){
        if(isupper(i))
            upper++;
        else
            lower++;
    }

    if(upper == word.length() || lower == word.length())
        return true;
    if(isupper(word[0]) && lower == word.size()-1)
        return true;    
    return false;
*/
