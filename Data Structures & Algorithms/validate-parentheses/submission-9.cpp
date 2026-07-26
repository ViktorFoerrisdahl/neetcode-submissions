class Solution {
public:
    bool isValid(string s) {
        vector<char> temp{};
        for (auto i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                temp.emplace_back(s[i]);
            }
            else if (temp.size() == 0)
            {
                return false;
            }
            else
            {
                if (temp[temp.size() - 1] == '(' && s[i] == ')' || temp[temp.size() - 1] == '[' && s[i] == ']' || temp[temp.size() - 1] == '{' && s[i] == '}')
                {
                    temp.pop_back();
                }
                else
                {
                    return false;
                }
            }
        }
        if (temp.size() == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
