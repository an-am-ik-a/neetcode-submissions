class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int left=0;
        int right=n-1;
        int result=0;
        while(left<right){
            int ContainerArea=min(heights[left],heights[right])*(right-left);
            result=max(ContainerArea,result);
            if(heights[left]<heights[right]){
                    left++;
            }
            else{
                    right--;
            }
        }
        return result;
    }
};
