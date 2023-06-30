#include <iostream>
using namespace std;

int threeSumClosest(int nums[], int n, int target) {
    int closest = 10000;
    int result;
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                int sum = nums[i] + nums[j] + nums[k];
                if (abs(target - sum) < closest) {
                    closest = abs(target - sum);
                    result = sum;
                }
            }
        }
    }
    return result;
}

int main() {
    int nums[] = {-1, 2, 1, -4};
    int target = 1;
    int n = sizeof(nums) / sizeof(nums[0]);
    cout << threeSumClosest(nums, n, target) << endl;
    return 0;
}
