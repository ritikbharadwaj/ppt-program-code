#include <iostream>
using namespace std;
int maximumProduct(int nums[], int size) {
    // Sort the array using bubble sort
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }

    // Maximum product can be either the product of the three largest numbers
    // or the product of the two smallest numbers and the largest number.
    return max(nums[size - 1] * nums[size - 2] * nums[size - 3], nums[0] * nums[1] * nums[size - 1]);
}

int main() {
    int nums[] = {1, 2, 3};
    int size = sizeof(nums) / sizeof(nums[0]);

    int maxProduct = maximumProduct(nums, size);

    cout << maxProduct << endl;

    return 0;
}
