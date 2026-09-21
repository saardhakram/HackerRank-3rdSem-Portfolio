#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    int primary_sum = 0;
    int secondary_sum = 0;
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        primary_sum += arr[i][i];
        secondary_sum += arr[i][n - 1 - i];
    }

    return abs(primary_sum - secondary_sum);
}

int main() {
    int n;
    if (!(cin >> n)) return 0;

    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    cout << diagonalDifference(arr) << endl;
    return 0;
}
