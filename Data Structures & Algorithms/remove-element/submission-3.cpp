class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> cpy{};
        for (auto i : nums) 
        {
            if (i != val) 
            {
                cpy.emplace_back(i);
            }
        }
        for (auto i = 0; i < cpy.size();i++)
        {
            nums[i] = cpy[i];
        }
        return cpy.size();
    }
};