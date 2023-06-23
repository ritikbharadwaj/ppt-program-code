#include <iostream>

using namespace std;

int searchInsert(int nums[], int length, int target) {
    int left = 0;
    int right = length - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return left;
}

int main() {
    int nums[] = {1, 3, 5, 6};
    int length = sizeof(nums) / sizeof(nums[0]);
    int target = 5;

    int index = searchInsert(nums, length, target);
    cout << index << endl;

    return 0;
}
