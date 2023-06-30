#include <iostream>
using namespace std;
int arrangeCoins(int n) {
    int completeRows = 0;
    int coinsInRow = 1;

    while (n >= coinsInRow) {
        n -= coinsInRow;
        coinsInRow++;
        completeRows++;
    }

    return completeRows;
}

int main() {
    int n = 5;
    int numCompleteRows = arrangeCoins(n);

    cout << numCompleteRows << endl;

    return 0;
}
