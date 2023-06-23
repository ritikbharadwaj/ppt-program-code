#include <iostream>

using namespace std;

int* findErrorNums(int nums[], int length) {
    int n = length;
    int sum = n * (n + 1) / 2;
    int sumSquares = n * (n + 1) * (2 * n + 1) / 6;
    int actualSum = 0;
    int actualSumSquares = 0;

    for (int i = 0; i < length; i++) {
        actualSum += nums[i];
        actualSumSquares += nums[i] * nums[i];
    }

    int diff = sum - actualSum;
    int sumDiff = sumSquares - actualSumSquares;
    int sumHalf = sumDiff / diff;

    int duplicate = (diff + sumHalf) / 2;
    int missing = (sumHalf - duplicate);

    int* result = new int[2];
    result[0] = missing;
    result[1] = duplicate;

    return result;
}

int main() {
    int nums[] = {1, 2, 2, 4};
    int length = sizeof(nums) / sizeof(nums[0]);

    int* result = findErrorNums(nums, length);

    cout << "[" << result[0] << ", " << result[1] << "]" << endl;

    delete[] result;

    return 0;
}
