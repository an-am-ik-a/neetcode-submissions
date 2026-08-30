class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        if (position.empty()) return 0;
        vector<pair<int,double>> position_time;
        for(int i=0;i<position.size();i++){
            double time=1.0*(target-position[i])/speed[i];
            position_time.push_back({position[i],time});
        }
        sort(position_time.begin(), position_time.end(), [](const pair<int, double>& a, const pair<int, double>& b) {
            return a.first > b.first;
        });
        stack<double> st;
        st.push(position_time[0].second);
        for(int i=1;i<position_time.size();i++){
            if(st.top()<position_time[i].second){
                st.push(position_time[i].second);
            }
        }
        return st.size();
    }
};
