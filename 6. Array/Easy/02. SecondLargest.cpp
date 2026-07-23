class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        long long largest = LLONG_MIN, secondLargest = LLONG_MIN;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > largest){
                secondLargest = largest;
                largest = nums[i];
            } else if(nums[i] < largest && nums[i] > secondLargest){
                secondLargest = nums[i];
            }
        }
        return secondLargest == LLONG_MIN ? -1 : secondLargest;
    }
};