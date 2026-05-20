class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sp = 0, fp = 0, count = 0;
        while(fp<t.size()){
            if(t[fp] == s[sp]){
                count++;
                sp++;
            }
            fp++;
        }
        if(count == s.size()){
            return true;
        }else{
            return false;
        }
    }
};
