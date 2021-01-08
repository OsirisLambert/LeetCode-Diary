#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size()- 1; i++) {
            for (int j = i+1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};
/*
int main() {
    Solution s;
    vector<int> y = { 3,2,4 };
    vector<int> a = s.twoSum(y, 6);
    for (int j = 0; j < a.size(); j++) {
        cout << a[j] << ',';
    }
    system("pause");
}
*/