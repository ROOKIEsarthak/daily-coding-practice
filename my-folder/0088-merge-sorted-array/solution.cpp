class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int l = m+n , r = n , val = 0;
        while(r > 0){
            if(l == 0){
                nums1[0] = nums2[r-1];
                r--;
            }else{ 
                nums1[l-1] = nums2[r-1];
                l--;
                r--;
            }
        }
        sort(nums1.begin(),nums1.end());
    }
};
