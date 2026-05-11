class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string res1 = "" , res2 = "";
        int ls = s.size()-1, rs = t.size()-1;
        int skips = 0,skipr = 0; 
        while(ls >= 0){
            if(s[ls]=='#'){
                skips++;
                ls--;
            }else{
                if(skips>0){
                    skips--;
                    ls--;
                }else{
                    res1.push_back(s[ls]);
                    ls--;
                }
            }
        }
        while(rs >= 0){
            if(t[rs]=='#'){
                skipr++;
                rs--;
            }else{
                if(skipr>0){
                    skipr--;
                    rs--;
                }else{
                    res2.push_back(t[rs]);
                    rs--;
                }
            }
        }
        if(res1==res2) return true;
        else return false;
    }
};
