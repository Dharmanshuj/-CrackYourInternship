class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> prefix_sum;
        int sum = 0, count = 0;
        prefix_sum[0] = 1;
        for(int i=0; i<nums.size(); i++) {
            sum += nums[i];
            int mod = (sum % k + k) % k;
            if(prefix_sum.find(mod) != prefix_sum.end())
                count += prefix_sum[mod];    
            prefix_sum[mod]++;
        }
        return count;
    }
};
