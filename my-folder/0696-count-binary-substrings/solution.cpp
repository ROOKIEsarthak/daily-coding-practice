class Solution {
public:
    int countBinarySubstrings(string s) {
        int prevGroup = 0;
        int currGroup = 1;
        int ans = 0;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i - 1]) {
                currGroup++;
            } else {
                prevGroup = currGroup;
                currGroup = 1;
            }
            if (prevGroup >= currGroup) {
                ans++;
            }
        }
        return ans;
    }
};
