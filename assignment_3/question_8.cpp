#include <iostream>
using namespace std;

const int MAXN = 1000;
int intervals[MAXN][2];

void sortIntervals(int intervals[][2], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (intervals[j][0] > intervals[j + 1][0]) {
                int tempStart = intervals[j][0];
                int tempEnd = intervals[j][1];
                intervals[j][0] = intervals[j + 1][0];
                intervals[j][1] = intervals[j + 1][1];
                intervals[j + 1][0] = tempStart;
                intervals[j + 1][1] = tempEnd;
            }
        }
    }
}

bool canAttendMeetings(int intervals[][2], int n) {
    sortIntervals(intervals, n);
    for (int i = 1; i < n; i++) {
        if (intervals[i][0] < intervals[i - 1][1]) {
            return false;
        }
    }
    return true;
}

int main() {
    intervals[0][0] = 0;
    intervals[0][1] = 30;
    intervals[1][0] = 5;
    intervals[1][1] = 10;
    intervals[2][0] = 15;
    intervals[2][1] = 20;
    int n = 3;
    cout << (canAttendMeetings(intervals, n) ? "true" : "false") << endl;
    return 0;
}
