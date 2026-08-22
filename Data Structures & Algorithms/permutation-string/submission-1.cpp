class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k = s1.size();
        int n = s2.size();
        for(int i = 0 ; i <= n-k ; i++){
            string str = s2.substr(i,k);
            cout<<str<<" ";
            unordered_map<char,int>mp;
            for(int s = 0 ; s<k ; s++){
                mp[s1[s]]++;
                mp[str[s]]--;
                if(mp[str[s]] == 0)
                    mp.erase(str[s]);

                if(mp[s1[s]] == 0)
                    mp.erase(s1[s]);
            }
            if(mp.size() == 0)
                return true;
        }

        return false;
    }
};
