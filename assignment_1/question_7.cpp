#include <iostream>

using namespace std;

void moveZeroes(int nums[], int length) {
    int i = 0; // Index to track the position for non-zero elements

    // Traverse the array and move non-zero elements to the front
    for (int j = 0; j < length; j++) {
        if (nums[j] != 0) {
            nums[i] = nums[j];
            i++;
        }
    }

    // Fill the remaining positions with zeros
    while (i < length) {
        nums[i] = 0;
        i++;
    }
}

int main() {
    int nums[] = {0, 1, 0, 3, 12};
    int length = sizeof(nums) / sizeof(nums[0]);

    moveZeroes(nums, length);

    for (int i = 0; i < length; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
