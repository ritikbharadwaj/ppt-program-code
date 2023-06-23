#include <iostream>

using namespace std;

int removeElement(int* nums, int numsSize, int val) {
    int k = 0; // Count of elements not equal to val

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
}

int main() {
    int nums[] = {3, 2, 2, 3};
    int val = 3;

    int k = removeElement(nums, sizeof(nums) / sizeof(nums[0]), val);

    cout <<" nums = [";
    for (int i = 0; i < k; i++) {
        cout << nums[i];
        if (i < k - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}
