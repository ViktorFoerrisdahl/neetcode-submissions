class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
            int temp = nums.size();
            for (auto j = 0; j < temp; j++)
            {
                nums.emplace_back(nums[j]);
            }

        return nums;
    }
};