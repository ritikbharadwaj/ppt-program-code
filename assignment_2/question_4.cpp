#include <iostream>
using namespace std;
bool canPlaceFlowers(int flowerbed[], int size, int n) {
    int count = 0;
    int i = 0;

    while (i < size) {
        if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) && (i == size - 1 || flowerbed[i + 1] == 0)) {
            flowerbed[i] = 1;
            count++;
        }

        if (count >= n)
            return true;

        i++;
    }

    return false;
}

int main() {
    int flowerbed[] = {1, 0, 0, 0, 1};
    int size = sizeof(flowerbed) / sizeof(flowerbed[0]);
    int n = 1;

    bool canPlace = canPlaceFlowers(flowerbed, size, n);

    cout << boolalpha << canPlace <<endl;

    return 0;
}
