#include <iostream>
using namespace std;

const int MAXN = 1000;
int ans[MAXN], ans_size = 0;

void plusOne(int digits[], int n) {
    int carry = 1;
    for (int i = n - 1; i >= 0; i--) {
        int sum = digits[i] + carry;
        ans[i] = sum % 10;
        carry = sum / 10;
    }
    if (carry == 1) {
        ans_size = n + 1;
        for (int i = n; i > 0; i--) {
            ans[i] = ans[i - 1];
        }
        ans[0] = 1;
    } else {
        ans_size = n;
    }
}

int main() {
    int digits[] = {1, 2, 3};
    int n = sizeof(digits) / sizeof(digits[0]);
    plusOne(digits, n);
    for (int i = 0; i < ans_size; i++) {
        cout << ans[i] << ' ';
    }
    cout << endl;
    return 0;
}
