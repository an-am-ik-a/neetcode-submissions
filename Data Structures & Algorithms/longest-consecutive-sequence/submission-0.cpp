class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> nums_map;
        for(int i=0;i<nums.size();i++){
            nums_map[nums[i]]++;
        }
        int res=0;
        for(int i=0;i<nums.size();i++){
            int start=nums[i]-1;
            if(nums_map.find(start)!=nums_map.end()) continue;
            int len=1;
            while(1){
                if(nums_map.find(nums[i]+len)==nums_map.end())  break;
                len++;
            }
            res=max(res,len);
        }
        return res;
    }
};
