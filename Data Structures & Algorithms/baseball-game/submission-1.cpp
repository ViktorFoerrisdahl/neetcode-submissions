class Solution {
public:
    int calPoints(vector<string>& operations) 
    {
        vector<int> temp;
        for (auto i = 0; i < operations.size(); i++)
        {
            if (operations[i] == "+")
            {
                temp.emplace_back(temp[temp.size()-1] + temp[temp.size()-2]);
            } 
            else if (operations[i] == "D")
            {
                temp.emplace_back(temp[temp.size()-1] * 2);
            }
            else if (operations[i] == "C")
            {
                temp.pop_back();
            } 
            else
            {
                temp.emplace_back(stoi(operations[i]));
            }
        }
        int sum{};
        for (auto it : temp)
        {
            sum += it;
        }
        return sum;
    }
};