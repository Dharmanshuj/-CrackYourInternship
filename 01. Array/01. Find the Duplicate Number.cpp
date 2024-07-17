class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<bool> v(nums.size(), false);
        for(auto i : nums) {
            if(v[i] == false)
                v[i] = true;
            else
                return i;
        }
        return 0;
    }
};
