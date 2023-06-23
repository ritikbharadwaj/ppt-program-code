#include <iostream>

int* twoSum(int* nums, int numsSize, int target) {
    int* result = new int[2];

    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }

    // No solution found
    return result;
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;

    int* result = twoSum(nums, sizeof(nums) / sizeof(nums[0]), target);

    // Print the result
    std::cout << result[0] << " " << result[1] << std::endl;

    delete[] result;

    return 0;
}
