class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' or s[i]=='{' or s[i]=='['){
                st.push(s[i]);
                continue;
            }
            if(st.empty())   return false;

            char c=st.top();
            if((c=='(' and s[i]==')') or (c=='{' and s[i]=='}') or (c=='[' and s[i]==']'))
                st.pop();
            else
                return false;
        }
        if(!st.empty())   return false;

        return true;
    }
};
