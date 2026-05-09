class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int l = m-1 , r = n-1 , tl = nums1.size()-1;
        // if arr1 size is 0 and arr2 size is n then push all the elements of arr2 into arr1;
        // if arr1 size is m and arr2 size is 0 then nothing to merge do nothing;
        // if both arr1 and arr2 have elements m and n then 
            // iterate from back of arr1 as it is of size (m+n)
            // if(nums1[l]<nums2[r]){
            //     nums1[tl] = nums2[r];
            //     r--; // move the arr2 pointer to the left 
            // }else{
            //     nums1[tl] = nums1[l];
            //     nums1[l] = 0;
            //     l--;
            // }
            
        while (r >= 0) {
            if (l >= 0 && nums1[l] > nums2[r]) {
                nums1[tl] = nums1[l];
                l--;
            } else {
                nums1[tl] = nums2[r];
                r--;
            }
            tl--;
        }
    }
};
