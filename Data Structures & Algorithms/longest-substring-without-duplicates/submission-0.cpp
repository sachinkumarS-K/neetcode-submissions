class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int>mp;
        int n = s.size();
        int l = 0 , r = 0 ;
        int maxLen = 0 ;
        while(r < n){
            mp[s[r]]++;
            if(mp.size() == r-l+1)
                maxLen = max(maxLen , r-l+1);
            else if(mp.size() < r-l+1){
                while(mp.size() < r-l+1){
                    mp[s[l]]--;
                    if(mp[s[l]] == 0)
                        mp.erase(s[l]);
                    l++;
                }
            }
            r++;
        }
        return maxLen;
    }
};
