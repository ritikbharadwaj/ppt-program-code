#include <iostream>

using namespace std;

int* plusOne(int digits[], int length, int& resultLength) {
    int carry = 1;
    for (int i = length - 1; i >= 0; i--) {
        digits[i] += carry;
        if (digits[i] <= 9) {
            carry = 0;
            break;
        }
        else {
            digits[i] = 0;
        }
    }

    if (carry == 1) {
        resultLength = length + 1;
        int* result = new int[resultLength];
        result[0] = 1;
        for (int i = 1; i < resultLength; i++) {
            result[i] = digits[i - 1];
        }
        return result;
    }
    else {
        resultLength = length;
        return digits;
    }
}

int main() {
    int digits[] = {1, 2, 3};
    int length = sizeof(digits) / sizeof(digits[0]);

    int resultLength;
    int* result = plusOne(digits, length, resultLength);

    cout << "[ ";
    for (int i = 0; i < resultLength; i++) {
        cout << result[i] << " ";
    }
    cout <<"]"<< endl;

    delete[] result;

    return 0;
}
