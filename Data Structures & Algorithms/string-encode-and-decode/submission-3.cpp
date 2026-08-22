class Solution {
public:

    string encode(vector<string>& strs) {
        string res="";
        for(int i=0;i<strs.size();i++){
            res.append("(");
            int len=strs[i].size();
            stringstream ss;
            ss<<setw(3)<<setfill('0')<<len;
            res+=ss.str();
            res.append(")");
            res.append(strs[i]);
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> decoded_string;
        int i=0;
        while(i<s.size()){
            string word="";
            int len;
            string len_str=s.substr(i+1,3);
            len=stoi(len_str);
            word=s.substr(i+5,len);
            decoded_string.push_back(word);
            i=i+5+len;
        }
        return decoded_string;
    }
};
