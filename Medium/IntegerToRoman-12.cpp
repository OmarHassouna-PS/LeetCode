#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    char CharacterNumber (int& num) {

        if (num >= 1000) {
            num -= 1000;
            return 'M';
        }
        else if (num >= 500) {
            num -= 500;
            return 'D';
        }
        else if (num >= 100) {
            num -= 100;
            return 'C';            
        }
        else if (num >= 50) {
            num -= 50;
            return 'L';            
        }
        else if (num >= 10) {
            num -= 10;
            return 'X';
        }
        else if (num >= 5) {
            num -= 5;
            return 'V';            
        }                
        else  if (num >= 1) {
            num -= 1;
            return 'I';
        }
    }

    string intToRoman(int num) {

        string answer = "";

        while ( num != 0 ) {

            if (num < 1000 && num >= 900) {
                answer += "CM";
                num -= 900;
            }
            else if (num < 500 && num >= 400) {
                answer += "CD";
                num -= 400;
            }
            else if (num < 100 && num >= 90) {
                answer += "XC";
                num -= 90;
            }
            else if (num < 50 && num >= 40) {
                answer += "XL";
                num -= 40;
            }
            else if (num < 10 && num >= 9) {
                answer += "IX";
                num -= 9;
            }
            else if (num < 5 && num >= 4) {
                answer += "IV";
                num -= 4;
            }
            else {
                answer += CharacterNumber(num);
            }
        }
        return answer;
    }
};

int main() {

    Solution Str;

    cout << Str.intToRoman(1994);
    return 0;
}
/* ابلع و اتعلم يا حمار كيف نحل
    string intToRoman(int num) {
        int normal[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string roman[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string res;
        for(int i=0;i<13;i++){
            while(num>=normal[i]){
                res.append(roman[i]);
                num-=normal[i];
            }
        }
        return res;
    }

    ***

    string intToRoman(int num) {
        string m[]={"","M","MM","MMM"};
        string c[]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string x[]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string i[]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string t=m[num/1000];
        string h=c[(num%1000)/100];
        string k=x[(num%100)/10];
        string b=i[(num%10)];
        return(t+h+k+b);
    }
     */