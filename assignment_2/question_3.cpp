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

int findLHS(int nums[], int length) {
    int maxLength = 0;

    bubbleSort(nums, length); // Sort the array using bubble sort

    int prevNum = nums[0];
    int prevCount = 1;
    int complementCount = 0;

    for (int i = 1; i < length; ++i) {
        if (nums[i] == prevNum) {
            prevCount++;
        } else if (nums[i] == prevNum + 1) {
            complementCount = prevCount;
            prevNum = nums[i];
            prevCount = 1;
        } else {
            prevNum = nums[i];
            prevCount = 1;
            complementCount = 0;
        }

        if (complementCount > 0) {
            maxLength = max(maxLength, prevCount + complementCount);
        }
    }

    return maxLength;
}

int main() {
    int nums[] = {1, 3, 2, 2, 5, 2, 3, 7};
    int length = sizeof(nums) / sizeof(nums[0]);

    int maxSubsequenceLength = findLHS(nums, length);

    cout << maxSubsequenceLength << endl;

    return 0;
}
