#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> res;
        if (nums.size() < 3)
            return res;

        // sort(nums.begin(), nums.end());
        // for(int i = 0; i < nums.size() - 2; i++){

        // }
    }
};

int main()
{
    vector<int> nums = {-1, 0};

    Solution s;
    vector<vector<int>> res = s.threeSum(nums);
    for (auto i : res)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}