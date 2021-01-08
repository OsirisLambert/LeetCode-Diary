#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums = merge(nums1, nums2);
        bool is_odd = (nums.size() % 2 == 0) ? false : true;
        int median_pos = (nums.size()-1) / 2;
        if (is_odd) {
            double median = nums[median_pos];
            return median;
        }
        else {
            double median = (nums[median_pos] + nums[median_pos + 1]) / 2.0;
            return median;
        }
        
    }

    vector<int> merge(vector<int>& nums1, vector<int>& nums2) {
        vector<int> a;
        for (int i = 0; i < nums1.size(); i++) {
            a.push_back(nums1[i]);
        }
        for (int i = 0; i < nums2.size(); i++) {
            a.push_back(nums2[i]);
        }
        for (int i = 0; i < a.size() - 1; i++) {
            for (int j = i+1; j < a.size(); j++) {
                if (a[i] > a[j]) {
                    int x = a[i];
                    a[i] = a[j];
                    a[j] = x;
                }
            }
        }
        return a;
    }
};
/*
int main() {
    vector<int> a = { 1,2 };
    vector<int> b = { 3, 4 };
    Solution x;
    double out = x.findMedianSortedArrays(a,b);
    cout << out;

    system("pause");
}
*/