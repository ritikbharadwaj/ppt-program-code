#include <iostream>
using namespace std;
int minimumScore(int nums[], int size, int k) {
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

    int minVal = nums[0] + k;
    int maxVal = nums[size - 1] - k;

    return max(0, maxVal - minVal);
}

int main() {
    int nums[] = {1};
    int size = sizeof(nums) / sizeof(nums[0]);
    int k = 0;

    int minScore = minimumScore(nums, size, k);

    cout << minScore << endl;

    return 0;
}
