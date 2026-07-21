class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> cpy;
        for (auto i = 0; i < 2; i++ )
        {
            for (auto j = 0; j < nums.size(); j++)
            {
                cpy.emplace_back(nums[j]);
            }
        }
        return cpy;
    }
};