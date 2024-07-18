class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        int prefixSum = 0, count = 0;
        map[0] = 1;
        for(auto i : nums) {
            prefixSum += i;
            if(map.find(prefixSum-k) != map.end())
                count += map[prefixSum-k];
            map[prefixSum]++;
        }
        return count;
    }
};
