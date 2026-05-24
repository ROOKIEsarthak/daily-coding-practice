class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>ump;
        int longest = 0;
        bool oddChar = false;
        for(auto i : s){
            ump[i]++;
        } 
        for(auto it:ump) {
            cout << it.first << "-" << it.second <<"\n";
            if(it.second % 2 == 0){
                longest += it.second;
            }else{
                longest += it.second -1;
                oddChar = true;
            }
        }
        if(oddChar){
            longest+=1;
        }
        return longest;
    }
};
