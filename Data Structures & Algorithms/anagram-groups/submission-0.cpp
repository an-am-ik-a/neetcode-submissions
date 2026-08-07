class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> anagram;
        for(int i=0;i<strs.size();i++){
            string s=strs[i];
            sort(s.begin(),s.end());
            anagram[s].push_back(strs[i]);
        }
        vector<vector<string>> res;
        for(auto it:anagram){
            vector<string> group;
            group=it.second;
            res.push_back(group);
        }
        return res;
    }
};
