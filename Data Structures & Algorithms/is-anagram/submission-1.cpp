class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        unordered_map<int,int> freq1;
        unordered_map<int,int> freq2;
        for(int i=0;i<n;i++){
            freq1[s[i]]++;
        }
        for(int j=0;j<m;j++){
            freq2[t[j]]++;
        }
        if(freq1.size()==freq2.size()){
            for(auto it:freq1){
                if(freq2[it.first]!=it.second)
                    return false;
            }
            return true;
        }
        return false;
    }
};
