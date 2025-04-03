#include<iostream>
#include<vector>

using namespace std;


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] != 0){
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};


int main(){
    vector<int> nums = {0,1,0,3,12};
    Solution sol;
    sol.moveZeroes(nums);
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    cout << endl;
}