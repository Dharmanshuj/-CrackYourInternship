class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<bool> v(nums.size()+1, false);
        vector<int> result;
        for(auto i : nums) {
            if(v[i] == true)
                result.push_back(i);
            else
                v[i] = true;
        }
        return result;
    }
};
