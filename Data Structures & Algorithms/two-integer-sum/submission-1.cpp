class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            int diff=target-nums[i];
            if(mp.find(diff)!=mp.end()){
                if(mp[diff]!=i){
                    res.push_back(mp[diff]);
                    res.push_back(i);
                    break;
                }
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};
