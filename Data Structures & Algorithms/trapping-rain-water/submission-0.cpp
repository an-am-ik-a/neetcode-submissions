class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> water_trapped_array(n,0);
        vector<int> prefix_max(n,0);
        vector<int> suffix_max(n,0);
        for(int i=1;i<n;i++){
            prefix_max[i]=max(prefix_max[i-1],height[i-1]);
        }
        for(int i=n-2;i>=0;i--){
            suffix_max[i]=max(suffix_max[i+1],height[i+1]);
        }
        for(int i=1;i<n-1;i++){
            if(min(prefix_max[i],suffix_max[i])>height[i]){
                water_trapped_array[i]=min(prefix_max[i],suffix_max[i])-height[i];
            }
        }
        int total_trapped_water=0;
        for(int i=0;i<n;i++){
            total_trapped_water+=water_trapped_array[i];
        }
        return total_trapped_water;
    }
};
