class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        int low=0;
        int high=s.size()-1;
        while(low<=high){
            char left=s[low];
            char right=s[high];
            if(isalnum(left) and isalnum(right)){
                if(tolower(left)!=tolower(right)){
                    return false;
                }
                low++;
                high--;
                continue;
            }
            if(!isalnum(left)){
                low++;
            }
            if(!isalnum(right)){
                high--;
            }
        }
        return true;
    }
};
