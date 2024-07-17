class Solution {
    void swap(vector<int>& nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        if(n < 2)
            return;
        int pos = 0;
        for(int i=0; i<n; i++) {
            if(nums[i] != 0) {
                swap(nums, pos, i);
                pos++;
            }
        }
    }
};
