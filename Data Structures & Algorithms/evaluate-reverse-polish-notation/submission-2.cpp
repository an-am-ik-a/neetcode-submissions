class Solution {
public:
    bool isNumber(string s){
        bool res = true;
        int start=0;
        if(s.size()>1 and s[0]=='-'){
            start=1;
        }
        for (int i=start;i<s.size();i++) {
            if (!isdigit(s[i])) {
                res = false;
                break;
            }
        }
        return res;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int res;
        for(int i=0;i<tokens.size();i++){
            if(isNumber(tokens[i])){
               st.push(stoi(tokens[i]));
               continue;
            }
            int operand2=st.top();
            st.pop();
            int operand1=st.top();
            st.pop();
            int ans;
            if(tokens[i]=="+")   
                ans=operand1+operand2;
            else if(tokens[i]=="-")
                ans=operand1-operand2;
            else if(tokens[i]=="*")
                ans=operand1*operand2;
            else if(tokens[i]=="/")
                ans=operand1/operand2;
            
            st.push(ans);
        }
        res=st.top();
        return res;
    }
};
