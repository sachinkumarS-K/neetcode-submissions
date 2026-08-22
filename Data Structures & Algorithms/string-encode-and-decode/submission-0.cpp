class Solution {
public:

    string encode(vector<string>& strs) {
        string str;
        for(auto s : strs){
            str += s;
            str += ".";
        }
        return str;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        int i = 0 ;
        for(int j = 0 ; j<s.size() ; j++){
            if(s[j] == '.'){
                ans.push_back(s.substr(i,j-i));
                i = j+1;
            }
        }
        // ans.push_back(s.substr(i,s.size()-1));
        return ans;
    }
};
