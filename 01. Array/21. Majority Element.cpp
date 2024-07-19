class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int limit = nums.size()/2;
        unordered_map<int, int> map;
        for(auto i : nums) {
            map[i]++;
            if(map[i] > limit) return i;
        }
        return 0;
    }
};
