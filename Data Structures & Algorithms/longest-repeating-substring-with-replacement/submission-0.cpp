class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int low=0;
        int high=0;
        unordered_map<char,int> f;
        f[s[0]]++;
        int result=0;
        while(high<n){
            int len=high-low+1;
            int most_frequent_char_len=0;
            for(auto it: f){
                if(it.second>most_frequent_char_len){
                    most_frequent_char_len=it.second;
                }
            }
            int diff = len-most_frequent_char_len;
            if(diff>k){
                f[s[low]]--;
                low++;
                continue;
            }
            high++;
            f[s[high]]++;
            result=max(result,len);
        }
        return result;
    }
};
