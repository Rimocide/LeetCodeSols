#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int m = nums.size();
        int mid = (m-1)/2;
        while (mid != m) {
            if (target == nums[m-1])
                return m-1;
            if (target == nums[mid])
                return mid;
            if (target > nums[mid]) {
                mid = (mid+m) / 2;
            }
            if (target < nums[mid]) {
                m = mid;
                mid = mid / 2;
            }
        }
        return -1; // Target not found
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 3, 5, 7, 9};
    int target = 9;
    int insertionPos = sol.searchInsert(nums, target);
    cout << "Insertion Position: " << insertionPos << endl;

    return 0;
}
