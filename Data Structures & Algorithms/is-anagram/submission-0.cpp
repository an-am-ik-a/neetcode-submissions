class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        unordered_map<int,int> freq;
        for(int i=0;i<n;i++){
            freq[s[i]]++;
        }
        for(int j=0;j<m;j++){
            freq[t[j]]++;
        }
        for(auto it:freq){
            if(it.second % 2!=0) return false;
        }
        return true;
    }
};
