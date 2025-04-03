#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> map; // 哈希表,存储元素值和下标
        for (int i = 0; i < nums.size(); i++)
        {
            int complement = target - nums[i];     // 计算目标差值
            if (map.find(complement) != map.end()) // 检查差值是否在哈希表中
            {
                vector<int> result;
                result.push_back(map[complement]);
                result.push_back(i);

                return result;
            }
            map[nums[i]] = i; // 将当前元素存入哈希表
        }
        return vector<int>();
    }
};

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    Solution s;
    vector<int> result = s.twoSum(nums, target);

    for (int i = 0; i < result.size(); i++)
        cout << result[i] << " ";
    cout << endl;

    return 0;
}