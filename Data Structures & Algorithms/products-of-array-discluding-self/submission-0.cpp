class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int total_product=1;
        int count_zero=0;
        int pos_zero=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count_zero+=1;
                pos_zero=i;
                continue;
            }
            total_product*=nums[i];
        }
        vector<int> result(nums.size(),0);
        if(count_zero==0){
            for(int i=0;i<nums.size();i++){
                result[i]=total_product/nums[i];
            }
        }
        else if(count_zero==1){
            result[pos_zero]=total_product;
        }
        return result;
    }
};
