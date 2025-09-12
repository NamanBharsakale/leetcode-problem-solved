#include <algorithm>
#include <cctype>
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {

        transform(s.begin(),s.end(),s.begin(), [](unsigned char c){ return tolower(c); });
        s.erase(remove_if(s.begin(),s.end(),[] (unsigned char c){return !isalnum(c); }),s.end());
        int n = s.length();
        for(int i = 0 ; i < n / 2; i++)
        {
            if(s[i] != s[n - 1 - i])
            return false;
        }
        return true;


        
    }
};