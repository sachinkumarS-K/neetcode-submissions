class Solution {
public:
    bool isValid(char ch){
        if((ch >= 'a' && ch <= 'z') || 
       (ch >= 'A' && ch <= 'Z') || 
       (ch >= '0' && ch <= '9'))
        return true;
    return false;
    }
    bool isPalindrome(string s) {
        int l = 0 , h = s.size()-1;
        while(l < h){
            while(l < h && !isValid(s[l])) l++;
            while(l < h && !isValid(s[h])) h--;

            char a = tolower(s[l]);
            char b = tolower(s[h]);

            if(a != b)    
                return false;
            l++;
            h--;    
        }
        return true;
    }
};
