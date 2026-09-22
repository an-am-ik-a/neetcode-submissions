class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        int low,high;
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        for(int i=0;i<n-2;i++){
            if(i>0 and nums[i]==nums[i-1]) continue;
            int target=-nums[i];
            low=i+1;
            high=n-1;
            while(low<high){
                int sum=nums[low]+nums[high];
                if(target==sum){
                    res.push_back({nums[i],nums[low],nums[high]});
                    low++;
                    high--;
                    while(low<n and nums[low]==nums[low-1] ) low++; //avoid duplicate
                    while(high>0 and nums[high]==nums[high+1])  high--;
                }
                else if(target<sum){
                    high--;
                }
                else{
                    low++;
                }
            }
        }
        return res;
    }
};
