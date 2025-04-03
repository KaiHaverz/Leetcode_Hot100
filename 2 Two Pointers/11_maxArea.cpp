#include<iostream>
#include<vector>

using namespace std;


class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int maxArea = 0;
        int left = 0;
        int right = height.size() - 1;

        while (left < right) {
            int area = min(height[left], height[right]) * (right - left);
            maxArea = max(maxArea, area);
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
       }

        return maxArea;
    }
};

int main() {
    Solution s;
    vector<int> height = {1,7};
    cout << s.maxArea(height) << endl;
    return 0;
}