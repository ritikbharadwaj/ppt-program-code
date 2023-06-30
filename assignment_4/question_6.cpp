#include <iostream>
using namespace std;
void squareSorted(int nums[], int size) {
    int left = 0;
    int right = size - 1;
    int result[size];
    int idx = size - 1;

    while (left <= right) {
        if (abs(nums[left]) > abs(nums[right])) {
            result[idx] = nums[left] * nums[left];
            left++;
        } else {
            result[idx] = nums[right] * nums[right];
            right--;
        }
        idx--;
    }

    for (int i = 0; i < size; i++) {
        nums[i] = result[i];
    }
}

int main() {
    int nums[] = {-4, -1, 0, 3, 10};
    int size = sizeof(nums) / sizeof(nums[0]);

    squareSorted(nums, size);

    for (int i = 0; i < size; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
