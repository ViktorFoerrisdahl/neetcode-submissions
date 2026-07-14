class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int max = 0;
        int temp = 0;
        for (auto i : nums) 
        {
            if (i == 1) 
            {
                temp++;
                if (temp > max) 
                {
                    max = temp;
                }
            } 
            else
            {
                temp = 0;
            }
        }
        return max;
    }
};