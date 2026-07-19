class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
    int temp{};
    vector<int> cpy{};
    for (auto i = 1; i < arr.size(); i++)
    {
        // std::cout << std::endl;
        // std::cout << "arr[i:]" << arr[i] << std::endl;
        temp = arr[i];
        for (auto j = i; j < arr.size(); j++)
        {
            // std::cout << "arr(J)" << arr[j] << std::endl;
            if (arr[j] > temp)
            {
                temp = arr[j];
            }
            // std::cout << "temp: " << temp << std::endl;
        }
        cpy.emplace_back(temp);
        temp = 0;
    }
    cpy.emplace_back(-1);
    return cpy;
    }
};