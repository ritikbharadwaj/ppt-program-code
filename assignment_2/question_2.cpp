#include <iostream>
using namespace std;
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int arr[], int length) {
    for (int i = 0; i < length - 1; ++i) {
        for (int j = 0; j < length - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int distributeCandies(int candyType[], int n) {
    int maxAllowed = n / 2;

    bubbleSort(candyType, n); // Sort the candyType array using bubble sort

    int uniqueCount = 1;
    for (int i = 1; i < n && uniqueCount < maxAllowed; ++i) {
        if (candyType[i] != candyType[i - 1]) {
            uniqueCount++;
        }
    }

    return uniqueCount;
}

int main() {
    int candyType[] = {1, 1, 2, 2, 3, 3};
    int n = sizeof(candyType) / sizeof(candyType[0]);

    int maxTypes = distributeCandies(candyType, n);

    cout << maxTypes <<endl;

    return 0;
}
