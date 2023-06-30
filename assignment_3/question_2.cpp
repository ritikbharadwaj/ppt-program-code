#include <iostream>
using namespace std;

const int MAXN = 1000;
int ans[MAXN][4], ans_size = 0;

void fourSum(int nums[], int n, int target) {
    for (int i = 0; i < n - 3; i++) {
        for (int j = i + 1; j < n - 2; j++) {
            for (int k = j + 1; k < n - 1; k++) {
                for (int l = k + 1; l < n; l++) {
                    if (nums[i] + nums[j] + nums[k] + nums[l] == target) {
                        ans[ans_size][0] = nums[i];
                        ans[ans_size][1] = nums[j];
                        ans[ans_size][2] = nums[k];
                        ans[ans_size][3] = nums[l];
                        ans_size++;
                    }
                }
            }
        }
    }
}

int main() {
    int nums[] = {1, 0, -1, 0, -2, 2};
    int target = 0;
    int n = sizeof(nums) / sizeof(nums[0]);
    fourSum(nums, n, target);
    for (int i = 0; i < ans_size; i++) {
        cout << '[' << ans[i][0] << ',' << ans[i][1] << ',' << ans[i][2] << ',' << ans[i][3] << ']' << endl;
    }
    return 0;
}
