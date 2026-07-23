//Approach 1 (TempArray)
class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        vector<int> temp(n);
        for(int i = k; i < n; i++){
            temp[i - k] = nums[i];
        }
        for(int i = 0; i < k; i++){
            temp[n - k + i] = nums[i];
        }
        nums = temp;
    }
};


//Approach 2 (Reverse)
class Solution {
public:
    void reverse(vector<int>& nums, int start, int end){
        while(start < end){
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }

    void rotateArray(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        reverse(nums, 0, k - 1);
        reverse(nums, k, n - 1);
        reverse(nums, 0, n - 1);
    }
};