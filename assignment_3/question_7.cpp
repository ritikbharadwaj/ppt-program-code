#include <iostream>
using namespace std;

const int MAXN = 1000;
int ans[MAXN][2], ans_size = 0;

void addRange(int low, int high) {
    ans[ans_size][0] = low;
    ans[ans_size][1] = high;
    ans_size++;
}

void findMissingRanges(int nums[], int n, int lower, int upper) {
    if (n == 0) {
        addRange(lower, upper);
        return;
    }
    if (nums[0] > lower) {
        addRange(lower, nums[0] - 1);
    }
    for (int i = 1; i < n; i++) {
        if (nums[i] - nums[i - 1] > 1) {
            addRange(nums[i - 1] + 1, nums[i] - 1);
        }
    }
    if (nums[n - 1] < upper) {
        addRange(nums[n - 1] + 1, upper);
    }
}

int main() {
    int nums[] = {0, 1, 3, 50, 75};
    int lower = 0, upper = 99;
    int n = sizeof(nums) / sizeof(nums[0]);
    findMissingRanges(nums, n, lower, upper);
    for (int i = 0; i < ans_size; i++) {
        cout << '[' << ans[i][0] << ',' << ans[i][1] << ']' << endl;
    }
    return 0;
}
