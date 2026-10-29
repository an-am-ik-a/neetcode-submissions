class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        if(n==0) return 0;
        int low=0;
        int high=1;
        unordered_map<char,int> f;
        f[s[0]]++;
        int result=1;
        while(high<n){
            if(f.find(s[high])!=f.end()){
                f.erase(s[low]);
                low++;
                continue;
            }
            f[s[high]]++;
            int len=high-low+1;
            result=max(result,len);
            high++;
        }
        return result;
    }
};
