class Solution {
public:
    int calPoints(vector<string>& operations) 
    {
        vector<int> temp;
        int sum{};
        for (auto i = 0; i < operations.size(); i++)
        {
            if (operations[i] == "+")
            {
                temp.emplace_back(temp[temp.size()-1] + temp[temp.size()-2]);
                sum += temp[temp.size() - 1];
            } 
            else if (operations[i] == "D")
            {
                temp.emplace_back(temp[temp.size()-1] * 2);
                sum += temp[temp.size() - 1];
            }
            else if (operations[i] == "C")
            {
                sum -= temp[temp.size() - 1];
                temp.pop_back();
            } 
            else
            {
                temp.emplace_back(stoi(operations[i]));
                sum += temp[temp.size() - 1];
            }
        }
        return sum;
    }
};