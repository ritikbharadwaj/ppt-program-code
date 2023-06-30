#include <iostream>
using namespace std;
int* findCommonElements(int arr1[], int arr2[], int arr3[], int size1, int size2, int size3, int& sizeResult) {
    int i = 0, j = 0, k = 0;
    int result[size1];  // Resultant array to store common elements

    sizeResult = 0;  // Initialize the size of the result array

    while (i < size1 && j < size2 && k < size3) {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
            result[sizeResult] = arr1[i];
            sizeResult++;
            i++;
            j++;
            k++;
        } else if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr2[j] < arr3[k]) {
            j++;
        } else {
            k++;
        }
    }

    // Create a dynamic array to store the result
    int* finalResult = new int[sizeResult];
    for (int i = 0; i < sizeResult; i++) {
        finalResult[i] = result[i];
    }

    return finalResult;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 5, 7, 9};
    int arr3[] = {1, 3, 4, 5, 8};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    int sizeResult;

    int* result = findCommonElements(arr1, arr2, arr3, size1, size2, size3, sizeResult);

    for (int i = 0; i < sizeResult; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    delete[] result;  // Remember to free the dynamically allocated memory

    return 0;
}
