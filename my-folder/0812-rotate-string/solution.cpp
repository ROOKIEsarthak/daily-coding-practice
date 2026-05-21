class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()){
            return false;
        }
        string duplicate = s+s;
        return duplicate.find(goal) != string::npos;
    }
};
