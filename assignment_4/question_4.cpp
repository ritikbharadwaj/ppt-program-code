#include <iostream>
using namespace std;
int arrayPairSum(int nums[], int size) {
    int minValue = nums[0];
    int maxValue = nums[0];

    // Find the minimum and maximum values in the nums array
    for (int i = 1; i < size; i++) {
        if (nums[i] < minValue) {
            minValue = nums[i];
        }
        if (nums[i] > maxValue) {
            maxValue = nums[i];
        }
    }

    const int range = maxValue - minValue + 1;
    int count[range] = {0};

    // Count the frequency of each integer in nums
    for (int i = 0; i < size; i++) {
        count[nums[i] - minValue]++;
    }

    int sum = 0;
    bool isOdd = true;  // Flag to alternate between adding and skipping elements

    // Iterate over count array and maximize the sum
    for (int i = 0; i < range; i++) {
        while (count[i] > 0) {
            if (isOdd) {
                sum += i + minValue;
            }
            isOdd = !isOdd;
            count[i]--;
        }
    }

    return sum;
}

int main() {
    int nums[] = {1, 4, 3, 2};
    int size = sizeof(nums) / sizeof(nums[0]);

    int maxSum = arrayPairSum(nums, size);

    cout << maxSum << endl;

    return 0;
}
