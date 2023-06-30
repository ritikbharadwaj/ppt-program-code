#include <iostream>
using namespace std;

int searchInsert(int nums[], int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return left;
}

int main() {
    int nums[] = {1, 3, 5, 6};
    int target = 5;
    int n = sizeof(nums) / sizeof(nums[0]);
    cout << searchInsert(nums, n, target) << endl;
    return 0;
}
