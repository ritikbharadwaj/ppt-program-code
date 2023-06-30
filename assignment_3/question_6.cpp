#include <iostream>
using namespace std;

int singleNumber(int nums[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= nums[i];
    }
    return result;
}

int main() {
    int nums[] = {2, 2, 1};
    int n = sizeof(nums) / sizeof(nums[0]);
    cout << singleNumber(nums, n) << endl;
    return 0;
}
