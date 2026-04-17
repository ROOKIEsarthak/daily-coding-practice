class Solution {
public:
    int maxArea(vector<int>& height) {
        int slow = 0;
        int fast = height.size()-1; 
        int area = 0;
        while(slow < fast){
            int curArea = (min(height[fast],height[slow])*(fast-slow));  
            area = max(curArea,area); 
            if(height[slow] < height[fast]){  
                slow++; 
            }else{
                fast--;
            }
        }
        return area;
    }
};
