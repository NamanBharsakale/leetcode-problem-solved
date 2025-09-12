
class Solution {
public:
    bool isPalindrome(string s) {
        string f;
        for(char c : s){
            if(isalnum(c)){ 
                f += tolower(c); 
                }
        }
        int l = 0, r = f.size() - 1;
        while(l < r)
        {
            if(f[l] != f[r]){
                return false;
            }
            l++;
            r--;
        }
    return true;
       
    }
};