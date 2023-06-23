#include <iostream>
using namespace std;
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int nums[], int length) {
    for (int i = 0; i < length - 1; ++i) {
        for (int j = 0; j < length - i - 1; ++j) {
            if (nums[j] > nums[j + 1]) {
                swap(nums[j], nums[j + 1]);
            }
        }
    }
}

int arrayPairSum(int nums[], int length) {
    bubbleSort(nums, length); // Sort the array using bubble sort

    int maxSum = 0;
    for (int i = 0; i < length; i += 2) {
        maxSum += nums[i]; // Sum the minimum element of each pair
    }

    return maxSum;
}

int main() {
    int nums[] = {1, 4, 3, 2};
    int length = sizeof(nums) / sizeof(nums[0]);

    int maxSum = arrayPairSum(nums, length);

    cout << maxSum << endl;

    return 0;
}
