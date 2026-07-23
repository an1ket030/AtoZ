// Optimized: Linear Scan
class Solution {
public:
    int largestElement(vector<int>& nums) {
        int maxval = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > maxval){
                maxval = nums[i];
            }
        }
        return maxval;
    }
};
// Time: O(n), Space: O(1)