class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto it:freq){
            pq.push({it.second,it.first});
        }
        vector<int> res;
        for(int i=1;i<=k;i++){
            int top=pq.top().second;
            pq.pop();
            res.push_back(top);
        }
        return res;
    }
};
