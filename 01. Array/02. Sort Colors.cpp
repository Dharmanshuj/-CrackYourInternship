class Solution
{
public:
    void sortColors(vector<int>& nums)
    {
        int n = nums.size(), flag = 0;
        if(nums.size() < 2)
            return;
        vector<int> num1, num2;
        for(int i=0; i<nums.size()/2; i++)
        {
            num1.push_back(nums[i]);
            num2.push_back(nums[nums.size()/2+i]);
        }
        if(nums.size() % 2 != 0)
            num2.push_back(nums[nums.size()-1]);
        sortColors(num1);
        sortColors(num2);
        int a=0, b=0, i=0;
        while(a<num1.size() && b<num2.size())
        {
            if(num1[a] > num2[b])
            {
                nums[i] = num2[b];
                b++;
            }
            else
            {
                nums[i] = num1[a];
                a++;
            }
            i++;
        }
        while(a<num1.size())
        {
            nums[i] = num1[a];
            i++;
            a++;
        }
        while(b<num2.size())
        {
            nums[i] = num2[b];
            i++;
            b++;
        }
    }
};
